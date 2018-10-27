set(test_name example_test) # Define varibale "test_name" which we can use as ${test_name}
add_executable(${test_name} test_example_library.cpp)

add_test(NAME ${test_name} COMMAND ${test_name})

