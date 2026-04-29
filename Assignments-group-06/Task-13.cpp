#include <iostream>
using namespace std;

int main()
{
  int index = 10;
  int jump = 2;

  for (;;)
  {
    // Write Your Code Here
    if (index >= (jump * jump))
    {
      cout << index << "\n"; // from 10 to 4
      index -= jump;
    }
    else if (index < (jump * jump))
    {
      break;
    }
  }

  // Output Needed
  // 10
  // 8
  // 6
  // 4
  return 0;
}