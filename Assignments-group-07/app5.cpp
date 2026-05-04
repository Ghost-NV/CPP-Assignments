#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // min and max takes 2 values only
  cout << max(10, 15) << "\n";
  cout << max('a', 'c') << "\n";
  cout << min(10, 15) << "\n";
  cout << min('a', 'c') << "\n";
  cout << min({10, 20, 30}) << "\n";
  cout << max({10, 20, 30}) << "\n";
  // allows this kind of arrays (not variables)

  // todo : make a simple loop do what these functions do
  // * mine:
  int arr[] = {10, 20, 40, 50, 55, 30, 15, 5};
  int count = size(arr);
  int maxVal = arr[0];
  for (int i = 0; i < count; i++)
  {
    if (arr[i] > maxVal) // to make it "min" change this only
    {
      maxVal = arr[i];
    }
  }
  cout << "Maximum: " << maxVal << endl;

  // ? instructor code :
  int nums[] = {10, -20, 30, -100, 100, -50};
  int numsSize = size(nums);
  int checkMinNum = 0;

  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] < checkMinNum) // same
      checkMinNum = nums[i];
  }
  cout << "Minimum: " << checkMinNum << endl;

  // todo : make a function like count() does (checks how many does the choosen number repeated)
  // ? *same as instructor in syntax & idea
  int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
  int numsTwoSize = size(numsTwo);
  int counter = 0;
  int choosenNum = 10;

  for (int i = 0; i < numsTwoSize; i++)
  {
    if (numsTwo[i] == choosenNum)
    {
      counter++;
    }
  }
  cout << choosenNum << " Found " << counter << " Times";

  return 0;
}