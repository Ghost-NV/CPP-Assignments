/*
  Vector
  - Iterator
  --- Loop With Iterator
  --- Ranged Loop With For
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = {10, 20, 30, 40};
  vector<int>::iterator it;
  // auto it = nums.begin(); // a way to upadte

  // Loop With Iterator
  for (it = nums.begin(); it != nums.end(); it++)
  {
    cout << *it << "\n";
  }

  cout << "================\n";

  // Ranged Loop With For
  for (int val : nums)
  /*
  - vector            => vector<int> nums = {}
  - array (C++ style) => array<int,3> nums = {}
  - C-style array     => int nums[] = {}
  - string            => string name = ""
  - list              => list<int> nums = {}
  - initializer       => {}
  */
  {
    cout << val << "\n";
  }

  cout << "================\n";

  int numbers[5] = {20, 40, 60, 80, 100};

  for (int myNumber : numbers)
  {
    cout << myNumber << "\n";
  }

  return 0;
}