#include <iostream>
#include <vector>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numssize)
{
  int result_even = 0; // plus
  int result_odd = 1;  // multiply
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      result_even += numbers[i];
    }
    else if ((numbers[i] % 2 != 0))
    {
      result_odd *= numbers[i];
    }
  }
  return result_even + result_odd;
}

int main()
{
  int numbers[] = {10, 20, 3, 30, 5, 7, 40};
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}