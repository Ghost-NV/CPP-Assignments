#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};

  // Write Your Code Here

  vector<int>::reverse_iterator fir = numbers.rend() - 1; // or use begin()
  vector<int>::reverse_iterator last = numbers.rbegin();  // or just use end() - 1

  // Do Not Edit Below
  cout << *fir << "\n";  // 10
  cout << *last << "\n"; // 80

  return 0;
}