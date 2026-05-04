#include <iostream>
#include <cctype>
using namespace std;

string space = "G H O S T"; // reccomeneded with short text only
void space_fn(string &space);

int main()
{
  space_fn(space);
  return 0;
}

void space_fn(string &space)
{
  int count = size(space);
  for (int i = 0; i < count; i++)
  {
    // if (space[i] == ' ' || space[i] == '\t' || space[i] == '\n' )
    // {
    //   continue;
    // }
    if (isspace(space[i])) // same and better, works with spaces, tabs, lines, etc...
    {
      continue;
    }
    else
    {
      cout << space[i];
    }
  }
  return;
}