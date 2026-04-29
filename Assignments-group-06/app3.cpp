#include <iostream>
using namespace std;

int main()
{
  // todo : reversed array (user types 5 numbers , then we reverse them)
  int vals[5];
  for (int in = 0; in < 5; in++)
  {
    cin >> vals[in];
  }
  for (int rv = 4; rv >= 0; rv--)
  {
    cout << vals[rv];
    if (rv > 0)
    {
      cout << ", ";
    }
  }
  return 0;
}