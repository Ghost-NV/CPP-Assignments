#include <iostream>
using namespace std;

// a return use case , overloading functions & function recuration

int add(int a, int b) // overloading requeirs functions to have diffrent data type or number
{
  return a + b;
}

int add(int num)
{
  if (num == 0)
  {
    return 0;
  }
  cout << num << "\n";
  cout << "========" << "\n";
  return num + add(num - 1); // here is the recuration
}

int main()
{
  cout << add(5) << "\n";
  cout << "================\n";
  cout << add(5, 3) << "\n";
  cout << "================\n";
  return 0;
}