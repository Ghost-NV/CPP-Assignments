#include <iostream>
using namespace std; 

int main() {

  // todo: a tracker checks if the number inserted is "Odd" or "Even"
  cout << "input number..." << endl;
  int num;
  cin >> num;
  int val = num % 2;
  cout << (val == 0 ? "Even\n" : "Odd\n");

  return 0;
}