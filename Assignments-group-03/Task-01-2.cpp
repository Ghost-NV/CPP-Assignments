#include <iostream>
using namespace std;
int main() {

  // Assignment Operators
  int a = 5;
  cout << a << endl;
  a += 10; // a = a + 10; (same)
  cout << a << endl;
  
  int b = 10;
  cout << b << endl;
  b -= 10; // b = b - 10 (same)
  cout << b << endl;
  
  int c = 10;
  cout << c << endl;
  c *= 10; // c = c * 10 (same)
  cout << c << endl;
  
  int d = 10;
  cout << d << endl;
  d /= 10; // d = d / 10 (same)
  cout << d << endl;
  
  int e = 10;
  cout << e << endl;
  e %= 10; // e = e % 10 (same)
  cout << e << endl;

  return 0;
}

