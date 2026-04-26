#include <iostream>
using namespace std;

// Test Case 1
int age = 18;
int points = 450;

int main() {

  if (age >= 18) {
    cout << "Yes Age Is Ok" << endl;
  }
  else if (age < 18) {
    cout << "No Age Is Not Ok" << endl;
    if (points >= 500) {
      cout << "Yes Points Is Ok" << endl;
    }
    else if (points < 500) {
      cout << "No Points Is Not Ok" << endl;
    }
  }

  return 0;
}
  