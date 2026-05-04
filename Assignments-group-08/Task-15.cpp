#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

  // Your Code Here
  reverse(nums.begin(), nums.end());  // reverse (8 7 6 5 4 3 2 1)
  sort(nums.begin(), nums.end() - 4); // sorting the first group (5 6 7 8)
  sort(nums.begin() + 4, nums.end()); // then, sorting the second group (..1 2 3 4)

  for (int i : nums)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4