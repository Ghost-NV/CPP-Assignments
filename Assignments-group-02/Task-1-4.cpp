#include <iostream>
using namespace std; /* no need to use "std::" in every line */
#define DAYS 7
// a constant variable without "const"

int lacVal = 10;
// Global variable

int first() {
  int locVal = 5;
  // Local value
  cout << DAYS;
  return 0;
}

int second() {
  // cout << locVal; (undifined)
  cout << lacVal;
  return 0;
}

int brobruh() {
  const int rec = 15;
  // rec = 17; (is a constant value)
  // const int rec; (does't have a value to change)
  cout << rec;
  return 0;
}

int main() {
  std::cout << " Hello World\n";
  std::cout << "  Hello World\t";
  std::cout << "   Hello World\"";

  int prc = 100; // variable with a value
  cout << "price is = " << prc;
  prc = 150; // updates variable
  cout << "new price is = " << prc;
  int n1prc; // variable without a value yet
  n1prc = 150;
  cout << "new price is = " << n1prc << "\n";
  
  int e , f = 40 , g;
  e = g = 50;
  cout << e << " + " 
  << f << " + " << g << " \t"
  << g + e + f;
  // Mix Mix Mix

  cout << "\n";
  cout << "\n";
  brobruh();
  cout << "\n";
  second();
  cout << "\n";
  first();
  return 0;
}