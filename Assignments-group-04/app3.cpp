#include <iostream>
using namespace std; 

int main() {

  // todo: a tracker checks the points, every amount of points has a condition
  int points;
  cin >> points;
  
  if (points > 1000) {
    cout << "VIP points" << endl;
  }

  else if (points <= 1000 && points > 700) {
    cout << "points is hight" << endl;
  }

  else if (points >= 700) {
    cout << "points is mid" << endl;
  }

  else {
    cout << "points is low" << endl;
  }

  return 0;
}