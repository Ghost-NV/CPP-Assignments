#include <iostream>
using namespace std;

int main()
{
  for (int i = 2; i < 127; i = i + i + 2)
  {
    cout << i << "\n";
  }
  // Output Needed
  // 2
  // 6
  // 14
  // 30
  // 62
  // 126
  return 0;
}