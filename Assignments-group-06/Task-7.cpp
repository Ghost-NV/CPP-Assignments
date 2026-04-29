#include <iostream>
using namespace std;

int main()
{
  // todo: print second , third only
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
  int size_fr = size(friends);
  for (int i = 0; i < size_fr; i++)
  {
    if (i == 1 || i == 2)
    {
      cout << "\"" << friends[i] << "\"" << "\n";
    }
    else
    {
      continue;
    }
  }
  return 0;
}

// Friends Array

// Output Needed
// "Mohamed"
// "Sayed"