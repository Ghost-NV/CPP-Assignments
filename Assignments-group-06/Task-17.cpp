#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
  int count = size(names);
  for (char i = 0; i < count; i++)
  {
    int count_chr = size(names[i]);
    if (count_chr == 5)
    {
      cout << "\"" << names[i] << "\"" << "\n";
    }
    else if (count_chr != 5)
    {
      continue;
    }
  }
  return 0;
}

// Output Needed
// "Osama"
// "Ahmed"
// "Hagar"
// "Salwa"