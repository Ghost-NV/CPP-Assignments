#include <iostream>
using namespace std;

// todo : power number app
int thepowerfor(int num, int exponent)
{
  int result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result = result * num;
  }
  return result;
}

int thepowerwhile(int num, int exponent)
{
  int result = 1;
  int i = 0;
  while (i < exponent)
  {
    i++;
    result = result * num;
  }
  return result;
}

int main()
{
  cout << "==== using for loop ====" << "\n";
  cout << thepowerfor(2, 7) << "\n"; // 128
  cout << thepowerfor(2, 6) << "\n"; // 64
  cout << thepowerfor(2, 5) << "\n"; // 32
  cout << thepowerfor(2, 4) << "\n"; // 16
  cout << "=== using while loop ===" << "\n";
  cout << thepowerwhile(3, 4) << "\n"; // 81
  return 0;
}