#include <iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "1 Shop Is Open";
    break;
  case 2:
    cout << "2 Shop Is Open";
    break;
  case 3:
    cout << "3 Shop Is Open";
    break;
  case 4:
    cout << "4 Shop Is Closed";
    break;
  case 5:
    cout << "5 Shop Is Closed";
    break;
  default:
    cout << "Day Is Not Valid";
  }

  // --- 

  switch (day)
  {
  case 1 : 
  case 2 :
  case 3:
    cout << day << " Shop Is Open";
    break;
  case 4:
  case 5:
    cout << day << " Shop Is Closed";
    break;
  default:
    cout << "Day Is Not Valid";
  }
  

  // another way ---

  if (day == 1 || day == 2 || day == 3) cout << day << " Shop Is open";
  else if (day == 4 || day == 5) cout << day << " Shop Is Closed";
  else cout << "Day Is Not Valid";

  return 0;
}