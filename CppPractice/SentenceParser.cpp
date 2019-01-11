//
//  main.cpp
//  SentenceManipulator
//
//  Created by Justin Owen on 1/10/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

//True if a space
bool space(char c){
    return isspace(c);
}

//True if not a space
bool not_space(char c){
    return !isspace(c);
}

//True if punctuation
bool ispunctuation(char c){
    static const string punc_ch = ".,?;!";
    
    return (find(punc_ch.begin(), punc_ch.end(), c) != punc_ch.end());
}


//Go through lines and store words in vector
vector<string> split(const string& str){
    typedef string::const_iterator iter;
    vector<string> ret;
    
    iter i = str.begin();
    
    while (i != str.end()){
        i = find_if(i, str.end(), not_space);
        
        iter j = find_if(i, str.end(), space);
        
        iter k = find_if(i, j, ispunctuation);
        
        if (i != str.end()){
            ret.push_back(string(i,k));
        }
        i = j;
    }
    return ret;
}



map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&) = split){
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;
    
    while (getline(in, line)){
        ++line_number;
        
        vector<string> words = find_words(line);
        
        for (vector<string>::const_iterator it = words.begin(); it != words.end(); ++it)
            ret[*it].push_back(line_number);
    }
    return ret;
}



int main() {

    map<string, vector<int> > ret = xref(cin);
    
    
    //Output counts
    for (map<string, vector<int> >::const_iterator iter = ret.begin(); iter != ret.end(); ++iter){
        cout << iter->first << " occurs on line(s): ";
    

        vector<int>::const_iterator line_it = iter->second.begin();
        cout << *line_it;
        ++line_it;
        
        while (line_it != iter->second.end()){
            cout << ", " << *line_it;
            ++line_it;
        }
        cout << endl;
    }
    return 0;
}


