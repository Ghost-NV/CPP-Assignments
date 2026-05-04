#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {5, 4, 3, 2, 1};

  // Method One
  sort(nums.begin(), nums.end());

  // Method Two
  reverse(nums.begin(), nums.end());

  // Method Three -> Use Swap + Loop For Challenge
  for (int i = 0; i < nums.size() / 2; i++)
  {
    swap(nums[i], nums[nums.size() - 1 - i]); // swap (a, b)
    // swap   nums[0] (value 5) with nums[4] (value 1)
    // then.. nums[1] (value 4) with nums[3] (value 2)
    // nums[2] (value 3) doesn't change also as the condition do already (2 repeats and then stop)
  }

  for (int i : nums)
  {
    cout << i << "\n";
  }

  return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5