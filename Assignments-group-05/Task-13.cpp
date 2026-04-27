#include <array>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";
  cout << fName << mName << lName << "\n"; // first
  cout << fName + mName + lName << "\n"; // second
  cout << fName.append(mName) << lName << "\n"; // third (didn't find another way)
  // Output Needed
  // Elzero Web School
  // Elzero Web School
  // Elzero Web School
  return 0;
}