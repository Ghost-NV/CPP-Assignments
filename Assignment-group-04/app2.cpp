#include <iostream>
using namespace std; 

int main() {

  // todo: a tracker checks the greatest number between 3 inserted numbers
  int num1 , num2 , num3;
  cin >> num1 >> num2 >> num3;
  // ! My complicated ,uncompleted ,and partly failed way
  if (num1 >= num2) {
    if (num1 > num2) {
      cout << "num1 is the greatest" << endl;
    }
    else if (num1 == num2 && num2 != num3 && num2 > num3 || num2 < num3) {
      cout << "num1 = num2" << endl;
    }
  }

  if (num1 < num2){
    cout << "num2 greater than num1" << endl;
    if (num2 >= num3) {
      if (num2 > num3) {
        cout << "num2 is the greatest" << endl;
      }
      else if (num2 == num3) {
        cout << "num2 = num3 and bigger than num1" << endl;
      }
    }
    if (num2 < num3) {
      cout << "num3 is greater than num2" << endl;
      if (num2 < num3 && num1 < num3) {
        cout << "num3 is the greatest" << endl;
      }
    }
  }
  if (num1 == num2 && num2 == num3) {
    cout << "all nums are equal" << endl;
  }

  
  // ? my simple fast way
  cout << "====simple==way==output=====" << endl;
  if (num1 >= num2 && num1 >= num3) {
    cout << num1 <<" is the greatest" << endl;
  }
  else if (num2 >= num1 && num2 >= num3) {
    cout << num2 << " is the greatest" << endl;
  }
  else {
    cout << num3 << " is the greatest" << endl;
  }
  return 0;
}