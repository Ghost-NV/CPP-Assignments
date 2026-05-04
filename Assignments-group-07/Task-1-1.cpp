#include <iostream>
#include <cmath> // must be used
using namespace std;

int main()
{
  cout << pow(2, 5) << "\n";     // power (result = 32)
  cout << fmod(11.5, 2) << "\n"; // more accurated "%" (result = 1.5)
  cout << ceil(9.1) << "\n";     // to the next integer (result = 10)
  cout << floor(9.1) << "\n";    // to the last integer (result = 9)
  cout << round(9.49) << "\n";   // to rounding number (9)
  cout << round(9.5) << "\n";    // to rounding number (10)
  cout << trunc(9.5) << "\n";    // delete the number after "." (like being "int data type"... result = 9)
  return 0;
}