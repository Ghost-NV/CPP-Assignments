#include <iostream>
using namespace std;

int main()
{
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
  // friends[0][0] this is how to get the first charcter of a string
  int size_fr = size(friends);
  for (char i = 0; i < size_fr; i++)
  {
    if (friends[i][0] == 'A')
    {
      cout << "\"" << friends[i] << "\"" << "\n";
    }
  }
  return 0;
}

// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"