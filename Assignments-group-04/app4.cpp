#include <iostream>
using namespace std; 

int main() {

  // todo: simple calculater
  int num1 , num2;
  char op;
  cout << "num1" << endl;
  cin >> num1;
  cout << "operator [+ , - , * , /]" << endl;
  cin >> op;
  cout << "num2" << endl;
  cin >> num2;
  cout << "output is: ";

  if (op == '+') cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  else if (op == '-') cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  else if (op == '*') cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  else if (op == '/') {
    if (num2 == 0) {
      cout << "Can not divide on zero!!" << endl;
    }
    else {
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
  }

  return 0;
}