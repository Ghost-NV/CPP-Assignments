/*
  Vector
  - Use Iterator To:
  --- Count
  --- Sort
  --- Reverse
  --- Swap
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swaper(int &a, int &b) // this is how swap() works
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  vector<int> nums = {10, 500, 60, -20, 20, 20, 100, 20};

  int val = 20;
  int countTimes = count(nums.begin(), nums.end(), val);
  cout << "Number " << val << " Found " << countTimes << " Times.\n";

  cout << "=====================\n";

  for (int &n : nums)
  {
    cout << n << "\n";
  }

  cout << "=====================\n";

  sort(nums.begin(), nums.end());

  for (int &n : nums)
  {
    cout << n << "\n";
  }

  cout << "=====================\n";

  reverse(nums.begin(), nums.end());

  for (int &n : nums)
  {
    cout << n << "\n";
  }

  cout << "=====================\n";

  return 0;
}