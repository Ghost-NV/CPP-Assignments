#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> numbers = {10, 20, 30, 40};
  vector<int>::iterator itf = numbers.begin();
  vector<int>::iterator ite = numbers.end() - 1;
  cout << "=========\n";

  cout << "way 1: " << numbers.at(0) << "\n";
  cout << "way 1: " << numbers.at(3) << "\n";
  cout << "=========\n";

  cout << "way 2: " << numbers[0] << "\n";
  cout << "way 2: " << numbers[3] << "\n";
  cout << "=========\n";

  cout << "way 3: " << numbers.front() << "\n";
  cout << "way 3: " << numbers.back() << "\n";
  cout << "=========\n";

  cout << "way 4: " << *itf << "\n";
  cout << "way 4: " << *ite << "\n";
  cout << "=========\n";
  return 0;
}

// print first and last element with 4 diffrent ways