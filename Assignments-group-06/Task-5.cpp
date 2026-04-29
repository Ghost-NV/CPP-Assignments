#include <iostream>
using namespace std;

int main()
{
  for (int i = 2; i < 129; i = i + i)
  {
    cout << i << "\n";
  }
  // Output Needed
  // 2
  // 4
  // 8
  // 16
  // 32
  // 64
  // 128
  return 0;
}