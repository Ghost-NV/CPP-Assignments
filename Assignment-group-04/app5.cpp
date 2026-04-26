#include <iostream>
using namespace std; 

int main() {

  // todo: symple award system aplication (using switch)
  int num;
  cout << "enter a day from 1 to 25" << endl;
  cin >> num;
  switch (num)
  {
  case 121:
    cout << "you won a phone" << endl;
    break;
  
  case 203:
    cout << "you won an ipad" << endl;
    break;
  
  case 113:
    cout << "you won a midal" << endl;
    break;
  
  default:
  cout << "you won (the nothing)" << endl;
    break;
  }

  return 0;
}