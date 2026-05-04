#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
  // add , access , update , delete
  vector<int> nums = {1, 3, 4, 5};
  nums.push_back(500); // vecor size is 5 now
  nums.at(4) = 10;     // better than nums[4], if there is an error, at() shows it, [] does NOT
  cout << "vector size is: " << nums.size() << "\n";
  nums.pop_back(); // delete, back to size 4
  cout << "vector size is: " << nums.size() << "\n";
  return 0;
}