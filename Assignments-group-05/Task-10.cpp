#include <array>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};
  string fst = "First: ";
  string lst = "Last: ";
  // Method 1
  // "First: 10"
  // "Last: 50"
  cout << fst << nums[0] << "\n";
  cout << lst << nums[5] << "\n"; 
  
  // Method 2
  // "First: 10"
  // "Last: 50"
  // ???
  // Method 3
  // "First: 10"
  // "Last: 50"
  // ???


  return 0;
}