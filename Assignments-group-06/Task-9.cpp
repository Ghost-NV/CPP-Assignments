#include <iostream>
using namespace std;

int main()
{
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int size_fr = size(friends);
  for (int i = 0; i < size_fr; i++)
  {
    cout << "=========" << "\n";
    cout << "= " << friends[i] << " =" << "\n";
    cout << "==================" << "\n";
    cout << "== ";
    for (int stg = 0; stg < 5; stg++)
    {
      cout << friends[i][stg];
      if (stg < size_fr + 1)
      {
        cout << ", ";
      }
    }
    cout << " =" << "\n";
    cout << "==================" << "\n\n";
  }
  return 0;
}

// Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================