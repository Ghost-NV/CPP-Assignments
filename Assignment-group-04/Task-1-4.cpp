#include <iostream>
using namespace std;

int main() {

  int day;
  cout << "enter a day from 1 to 25" << endl;
  cin >> day;
  // switch works like if condition
  // switch allows "char" and "int" only
  switch (day) // here we write the variable
  {
  case 1: // like if
  case 2: // like "||" in ()
    cout << "day 1 and 2 opened from 09:00 to 20:00";
    break;
  
  case 3: // like else if
    cout << "day 3 opened from 10:00 to 22:00";
    break;
  
  default: // like else
    break;
  }

  return 0;
}
