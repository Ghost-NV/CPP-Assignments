#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 1200; i += 100)
  {
    if (i == 0)
    {
      continue;
    }
    else if (i == 1200)
    {
      break;
    }
    cout << i << "\n";
  }

  return 0;
}

// Output Needed
// 100
// 200
// 200
// 300
// 300
// 400
// 400
// 500
// 500
// 600
// 600
// 700
// 700
// 800
// 800
// 900
// 900
// 1000
// 1000
// 1100