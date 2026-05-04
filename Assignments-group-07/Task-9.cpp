#include <iostream>
using namespace std;

// Write Your Function Here

int minpositive(int numbers[], int numssize)
{
  int result = -1;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] > 0)
    {
      if (result == -1 || numbers[i] < result)
      {
        result = numbers[i];
      }
    }
  }
  return result;
}

// ? check my explation :
/*
- start with -1 not 0
- in -10 & -15 cases.. no thing happens
- in 15 case, result change to 15
- in 10 case, result is compared with 15, 10 is less than 15 then result = 10 currently
- same way with others
*/

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}