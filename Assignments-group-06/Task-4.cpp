#include <iostream>
using namespace std;

int main()
{
  for (int i = 10; i < 100000001; i = i * i)
  {
    cout << i << "\n";
  }
  // Output Needed
  // 10
  // 100
  // 10000
  // 100000000
  return 0;
}