#include <iostream>
using namespace std;
int main() {

  // Logical Operators
  int age = 18;
  int points = 214;
  cout << (age >= 18 || points >= 300); // either
  cout << (age >= 18 && points >= 300); // both
  cout << (age >= 18); // true * 1 = true 
  cout << !(age >= 18); // true * -1 = false (whice "!" is "-1")

  return 0;
}