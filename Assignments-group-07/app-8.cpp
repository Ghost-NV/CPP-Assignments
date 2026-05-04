#include <iostream>
using namespace std;

// todo : simple calc
// Write Your Function Here
int calculate(int num1, int num2, string op = "+")
{
  int result = 0;
  cout << "num1" << endl;
  cin >> num1;
  cout << "operator [+ , - , *]" << endl;
  cin >> op;
  cout << "num2" << endl;
  cin >> num2;
  cout << "output is: ";

  if (op == "+" || op == "a")
  {
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
  }
  else if (op == "-" || op == "s")
  {
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
  }
  else if (op == "*" || op == "m")
  {
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
  }
  else
  {
    return 0;
  }
  return result;
}

int main()
{
  // better to make it with "cin" then no need for that stuff
  cout << calculate(10, 20) << "\n";             // 30
  cout << calculate(10, 20, "a") << "\n";        // 30
  cout << calculate(10, 20, "s") << "\n";        // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n";        // 200
  cout << calculate(10, 20, "Invalid") << "\n";  // 0
  return 0;
}