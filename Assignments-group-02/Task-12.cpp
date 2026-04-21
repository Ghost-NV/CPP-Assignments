#include <iostream>
using namespace std;

int main() {
  // Do Not Edit Here
  short a = 1000;
  int b = 10000;
  long double c = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  cout << int(c * 3) - 4 << "\n"; // 12
  cout << int(c * 3) + 4 << "\n"; // 20
  cout << int(c - 1) * 8 << "\n"; // 32
  cout << a * int(c) << "\n"; // 5000
  cout << char(int(c) * 16) << "\n"; // P (80)
  return 0;
}