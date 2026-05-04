#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers(100, 1000);
  vector<float> floats(100);

  for (int i = 0; i < floats.size(); i++)
  {
    floats.at(i) = 100.50f;
  }

  // Fill Integers Here

  // Fill Floats Here

  cout << numbers.at(0) << "\n";  // 1000
  cout << numbers.at(99) << "\n"; // 1000

  cout << floats.at(0) << "\n";  // 100.50
  cout << floats.at(99) << "\n"; // 100.50
  return 0;
}