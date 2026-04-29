#include <iostream>
using namespace std;

int main()
{
  // todo: loop print the range odd numbers between the 2 inputed numbers
  // ! challenge (DONE, FINALLY)
  cout << "YOU DON'T DARE TO RIGHT A NEGATIVE NUMBER RIGHT!" << "\n";
  int num_in[2] = {0, 0};
  for (int in = 0; in < 2; in++)
  {
    cin >> num_in[in];
  }
  int i0 = num_in[0];
  int size = (num_in[1] - num_in[0]);
  int size_rv = (num_in[0] - num_in[1]);
  for (; i0 < num_in[1]; i0++) // num_in[0] = 1 , num_in[1] = 12
  {
    if (i0 % 2 == 0 || i0 == num_in[0])
    {
      continue; // even
    }
    else
    {
      cout << i0; // odd
      if (i0 < size)
      {
        cout << ", ";
      }
    }
  }
  bool tr = true;

  for (; i0 > num_in[1]; i0--) // num_in[0] = 12 , num_in[1] = 1
  {
    if (i0 % 2 == 0 || i0 == num_in[0])
    {
      continue; // even
    }
    else
    {
      if (!tr) // continue for the first number (the greatest num)
      {
        cout << ", ";
      }
      cout << i0;
      tr = false; // breaks the continue (for the second and other numbers)
    }
  }
}

/*
Test Case 1
Number One: 1
Number Two: 9
Output: 3, 5, 7 (9 - 1 = 8) (need 1 numbers (be 10) to make output size = 4 not 3)

Test Case 2
Number One: 2
Number Two: 15
Output: 3, 5, 7, 9, 11, 13 (15 - 2 = 13) (need 1 numbers (be 16) to make output size = 7 not 6)

Test Case 3
Number One: 8
Number Two: 2
Output: 3, 5, 7 (8 - 1 = 7) (need 2 numbers (be 10) to make output size = 4 not 3)
*/