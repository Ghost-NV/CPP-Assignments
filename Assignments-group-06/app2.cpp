#include <iostream>
using namespace std;

int main()
{
  // todo : array of odd , even , postive and negative numbers, print even postitve numbers of them only
  int nums[] = {10, 20, -20, 13, 30, -30, 40, 50, -10, -498, -124, 123, 110}; // will print : 10, 20, 30, 40, 50, 110
  int size = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < size; i++)
  {
    if (nums[i] > 0 && nums[i] % 2 == 0) // if it's positve , even
    {
      cout << nums[i];
      if (i < size - 1) // last num?
      {
        cout << ", ";
      }
      else if (i == size - 1) // break (doesn't print ", ")
      {
        break;
      }
    }
  }
}