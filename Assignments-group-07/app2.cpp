#include <iostream>
using namespace std;

// todo : (instructor code)
void calc(int nums[], int count)
{
  int result = 0;
  for (int i = 0; i < count; i++)
  {
    result += nums[i];
  }
  cout << "Result Is: " << result << "\n";
}

int main()
{
  // calc(10, 20, 30);

  int arrayOfNumbers[] = {10, 20, 30, 40, 100};
  int numsSize = size(arrayOfNumbers);

  calc(arrayOfNumbers, numsSize);
  return 0;
}