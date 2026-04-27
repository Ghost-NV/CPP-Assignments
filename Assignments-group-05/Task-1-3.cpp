#include <iostream>
#include <array>
#include <cstring>
using namespace std;

int main() {
  // string is array of characters

  char name_a[] = "Ghost";
  cout << name_a << "\n";
  cout << sizeof(name_a) << "\n"; // 6 ("/0" is the last element and been added to any string to end it so that it been counted as a character (it's ASCII value is 0 too))
  cout << name_a[0] << "\n"; // 6

  char name_b[] = {'G' , 'h' , 'o' , 's' , 't' , '\0'};
  cout << name_b << "\n";
  cout << sizeof(name_b) << "\n"; // 6
  cout << name_b[0] << "\n";

  string name_c ="Ghost";
  cout << name_c << "\n";
  cout << sizeof(name_c) << "\n"; // 32
  cout << name_c[0] << "\n";

  // string constractions

  char first_n[] = "Saged ";
  char last_n[] = "Ghost ";
  cout << first_n << last_n << "\n"; // normal way, for all types of data as usual
  cout << strcat(first_n , last_n) << "\n"; // another way, better but requers <cstring>

  string first_n_str = "Saged ";
  string last_n_str = "Ghost ";
  cout << first_n_str.append(last_n_str) << "\n"; // doesn't work with 'char' arrays, requiers a string
  cout << first_n_str + last_n << "\n"; // onther way (also requers string / int)

  return 0;
}