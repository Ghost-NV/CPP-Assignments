#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "unsigned")
{
  cout << "Hello ";
  if (gender == "Male")
  {
    cout << "Mr ";
  }
  else if (gender == "Female")
  {
    cout << "Miss ";
  }
  cout << name;
  return "";
}

int main()
{
  cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n";          // Hello Sameh
  return 0;
}