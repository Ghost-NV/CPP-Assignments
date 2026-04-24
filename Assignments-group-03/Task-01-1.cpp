#include <iostream>
using namespace std;

int main() {

// Arithmetic Operators
cout << 27 + 25 << endl;
cout << 27 - 25 << endl;
cout << 27 * 25 << endl;
cout << 27 / 25 << endl;
cout << 27 % 25 << endl; // 27 / 25 = 1 .. 2
/* remember , * and / are always has the pirotriy
+ and - comes in the second .. if there is * and / 
then it depends on the direction (left to right)
so that who wrotten first has the piririty */

// Operators Precedence
cout << 20 + 10 / 5 * 10 << endl;
// 10 / 5 = 2
// 2 * 10 = 20
// 20 + 20 = 40
cout << (20 + 50) / 5 * 10 << endl;
// 20 + 50 = 70 
// 70 / 5 = 14
// 14 * 10 = 140
  cin.get();
  return 0;
}