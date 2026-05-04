#include <iostream>
using namespace std; 

int main() {

  // todo: simple calculater (using switch)
  int num1 , num2;
  char op;
  cout << "num1" << endl;
  cin >> num1;
  cout << "operator [+ , - , * , /]" << endl;
  cin >> op;
  cout << "num2" << endl;
  cin >> num2;
  cout << "output is: ";

  switch (op)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
  
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
  
  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
  
  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
  
  default:
  cout << "un valid" << endl;
    break;
  }

  return 0;
}