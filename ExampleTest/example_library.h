#include <vector>

template <typename T>
std::vector<T> ScalarPlusVector(const double x, const std::vector<T> &v) {
  std::vector<T> result = v; // Make a vector of the same size as v
  for (auto &val : result) {
    val += x;
  }
  return result;
}
