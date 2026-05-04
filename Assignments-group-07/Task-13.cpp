#include <iostream>
using namespace std;

// Write Your Function Here
int books(int S_book, int M_book, int L_book, int roof)
{
  int result = 0;
  S_book *= 2;
  M_book *= 4;
  L_book *= 6;
  roof *= 20;
  result = roof - (S_book + M_book + L_book);
  if (result < 0)
  {
    return 0;
  }
  return result;
}
int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}