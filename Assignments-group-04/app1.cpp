#include <iostream>
using namespace std;

int main()
{
  // todo: a tracker checks if the number inserted is "Odd" or "Even"
  cout << "input number..." << endl;
  int num;
  cin >> num;
  cout << (num % 2 == 0 ? "Even\n" : "Odd\n");
  return 0;
}
