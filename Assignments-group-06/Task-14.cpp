#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 100, 101, 102};
  int count = size(arr);
  for (int i = 0; i < count; i++)
  {
    if (arr[i] < 10)
    {
      cout << '0' << '0' << arr[i] << "\n";
    }
    else if (arr[i] < 100)
    {
      cout << '0' << arr[i] << "\n";
    }
    else
    {
      cout << arr[i] << "\n";
    }
  }

  return 0;
}

// Output Needed
// 001
// 002
// 003
// 004
// 005
// 006
// 007
// 008
// 009
// 010
// 011
// 012
// 013
// 014
// 015
// 016
// 017
// 018
// 019
// 020
// 100
// 101
// 102