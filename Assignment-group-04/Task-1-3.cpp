#include <iostream>
using namespace std;

int main() {
  int age = 16;
  int points = 700; 
  int rank = 3;

  // another syntax condidtion shortcut (requirs to be 1 line only and no nested)
  if (age >= 18) cout << "age is OK-111";
  else if (points >= 400) cout << "points is OK-111";
  else cout << "Not OK-111";

  return 0;
}