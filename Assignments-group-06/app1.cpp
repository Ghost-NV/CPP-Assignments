#include <iostream>
using namespace std;

int main()
{
  // todo : output needed (the last 4 numbers of this array)
  int nums[]{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
  int numscount = sizeof(nums) / sizeof(nums[0]); // 10
  for (int index = numscount - 1; index > 5; --index)
  {
    cout << nums[index] << "\n";
  }

  cout << "============\n";
  // todo : bonus : make it alternative (automatically changeed when edit on the array size)
  int alt[]{100, 200, 300, 400, 900};               // a new alternatively array
  int numscount_alt = sizeof(alt) / sizeof(alt[0]); // number of the alternatively array
  int index_m = numscount_alt - (numscount_alt - 1);
  int index_mx = numscount_alt - 5;
  for (int ind = numscount_alt - index_m; ind > index_mx; --ind)
  {
    cout << alt[ind] << "\n";
  }
  return 0;
}