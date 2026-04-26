#include <iostream>
using namespace std; 

int main() {

  // todo: symple discount application (using switch)
  int price = 1000;
  float discount = 0.90;
  int years;
  cout << "enter a day from 1 to 25" << endl;
  cin >> years;
  switch (years)
  {
  case 1:
    discount = 0.80;
    break;
  
  case 2:
    discount = 0.75;
    break;
  
  case 3:
    discount = 0.70;
    break;
  
  default:
    break;
  }
  cout << "price is " << price * discount << " after discount";
  // recognize that there is no comparintions in switch (< , >) so 4+ years would just get 0.90 discont, use if condition in this case 

  return 0;
}