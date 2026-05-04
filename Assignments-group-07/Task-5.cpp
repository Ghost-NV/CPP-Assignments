#include <iostream>
#include <vector>
using namespace std;

// Write Your Function Here

string swapping(string val)
{
  vector<string> vec = {val};
  for (int i = 0; i < val.size(); i++)
  {
    if (isupper(val.at(i)))
    {
      if (val.at(i) == 'h' || val.at(i) == 'H')
      {
        continue;
      }
      else
      {
        val[i] = tolower(val.at(i));
      }
    }
    else if (islower(val.at(i)))
    {
      if (val.at(i) == 'h' || val.at(i) == 'H')
      {
        continue;
      }
      else
      {
        val[i] = toupper(val.at(i));
      }
    }
  }
  return val;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}