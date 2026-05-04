#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[], int numssize)
{
  int result = -1;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] < 0)
    {
      if (result == -1 || numbers[i] > result)
      {
        result = numbers[i];
      }
    }
  }
  return result;
}
// (same as last assignment)

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}