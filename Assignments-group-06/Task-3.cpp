#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  while (true)
  {
    if (i < 28)
    {
      cout << i << "\n";
      i = i + 3;
    }
    else
    {
      break;
    }
  }
  return 0;
}

// Output Needed
// 0
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27