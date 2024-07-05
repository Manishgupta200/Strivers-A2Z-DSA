// return sum of all the array
#include <iostream>
// The following library needs to be included to use std::accumulate()
#include <numeric>
#include <vector>

using namespace std;

int main() {
  std::vector<int> v{1, 2, 6, 5};
  long long sum = std::accumulate(v.begin(), v.end(), 0ll);
  std::cout << sum;
}