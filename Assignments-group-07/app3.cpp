#include <iostream>
#include <cctype>
using namespace std;

// todo : simple swap case app (small lower to upper)...
// functions used : tolower , toupper , islower , isupper
string name_h = "gHoSt GhOsT"; // GhOsT gHoSt(reverse)
int count = size(name_h);

void swapp(string &name_h)
{
  for (int i = 0; i < count; i++)
  {
    if (isupper(name_h[i]))
    {
      name_h[i] = tolower(name_h[i]);
    }
    else if (islower(name_h[i]))
    {
      name_h[i] = toupper(name_h[i]);
    }
  }
}

int main()
{
  swapp(name_h);
  cout << name_h;
  return 0;
}
