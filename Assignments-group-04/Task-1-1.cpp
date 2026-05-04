#include <iostream>
using namespace std;

int main() {
  int age = 16;
  int points = 700; 
  int rank = 3;

  // if , else , else if condition
  if (age >= 14) {
    cout << "Age is accepted" << endl;
    // nested condition
    if (points >= 700 && rank <= 3)  {
      cout << "age and points and rank< huh!!" << endl;
    }
    else if (points >= 600) {
      cout << "Points is completely amazing!!" << endl;
      if (rank <= 3) {
        cout << "Either rank!! nice" << endl;
      }
    }
    else if (rank <= 3) {
      cout << "but your rank is great!!" << endl;
    }
  }
  
    else if (points >= 600) {
    cout << "Points is accepted" << endl;
    if (points >= 600) {
      cout << "Points is completely great!!" << endl;
    }
  }
  else if (rank <= 4) {
    cout << "rank is accepted" << endl;
    if (points >= 600) {
      cout << "Points is completely unbeleaveable!!" << endl;
    }
  }
  else {
    cout << "Nothing is accepted" << endl;
    if (points >= 600) {
      cout << "Points is.. how" << endl;
    }
  }
  
  return 0;
}