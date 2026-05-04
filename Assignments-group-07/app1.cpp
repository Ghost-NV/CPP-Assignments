#include <iostream>
using namespace std;

// todo : make a simple calculator using functions

void calc(int num1, string op, int num2);
// forward declaration (tell compiller there is a function called "calc" then you can move it anywhere now)

int main()
{
  int a;
  string b;
  int c;
  cout << "enter a number" << "... ";
  cin >> a;
  cout << "enter an operator" << "... ";
  cin >> b;
  cout << "enter a number" << "... ";
  cin >> c;
  calc(a, b, c);
}

void calc(int num1, string op, int num2)
{
  if (op == "+")
  {
    cout << num1 << " " << op << " " << num2 << " = " << num1 + num2 << "\n";
  }
  else if (op == "-")
  {
    cout << num1 << " " << op << " " << num2 << " = " << num1 - num2 << "\n";
  }
  else if (op == "*")
  {
    cout << num1 << " " << op << " " << num2 << " = " << num1 * num2 << "\n";
  }
  else if (op == "/")
  {
    cout << num1 << " " << op << " " << num2 << " = " << num1 / num2 << "\n";
  }
  else
  {
    cout << "Not valid" << "\n";
  }
}
