#include <iostream>
using namespace std;

// ! challenge (failed partly, CUZ WHILE DUMB LOOP!)
int main()
{
  int num = 2;
  while (num < 520)
  {
    static int out = 1;
    cout << out << "\n";
    out = (out * 2) + 2;
    num = (num * 2) + 2;
  }

  return 0;
}

// Needed Output
// 1
// 4
// 10
// 22
// 46
// 94
// 190
// 382