#include <iostream>
#include <vector>

using namespace std;
int main()
{
  /* ---- [*] Dereference => Dont Print The Iterator, Print What Its Point To ---- */
  // advance() => move iterator
  vector<int> nums = {10, 20, 30, 40};
  cout << "First Element Is: " << *nums.begin() << "\n";

  nums.erase(nums.begin(), nums.begin() + 2); // delete nums.begin() , nums.begin() + 1, keep nums.begin() + 2
  cout << "First Element After Delete Is: " << *nums.begin() << "\n";

  vector<int> nums_l2 = {10, 20, 30, 40};
  vector<int>::iterator first = nums_l2.begin();
  vector<int>::iterator last = nums_l2.end() - 1;

  cout << "First Element Is: " << *first << "\n";            // 10
  cout << "Second Element Is: " << first[1] << "\n";         // 20
  cout << "Third Element Is: " << first[2] << "\n";          // 30
  cout << "Last Element Is: " << *last << "\n";              // 40
  cout << "Before Last Element Is: " << *(last - 1) << "\n"; // 30

  advance(first, 2);
  cout << "iterator points at: " << *first << "\n"; // 30

  advance(first, -1);
  cout << "iterator points at: " << *first << "\n"; // 10

  cout << "=====\n";
  vector<int> num = {10, 20, 30, 40};
  vector<int>::iterator it = num.begin();
  auto itfst = num.begin() + 1;
  auto itend = num.end() - 1;

  cout << "First Element Is: " << *it << "\n";
  cout << "First Element Is: " << *itfst << "\n";
  cout << "First Element Is: " << *itend << "\n";

  cout << "==============\n";
  vector<int> iowrt = {10, 20, 30, 40};
  for (auto it = iowrt.begin(); it != iowrt.end(); it++)
  {
    cout << *it << "\n";
  }
  cout << "==============\n";
  for (auto it = iowrt.rbegin(); it != iowrt.rend(); it++) // rbegin & rend are reverse to begin & end
  {
    cout << *it << "\n";
  }
  cout << "===\n";
  vector<int>::reverse_iterator itbeginer = iowrt.rend() - 1;
  vector<int>::reverse_iterator itender = iowrt.rbegin() + 1;
  /* default rend() is undefined ,
    when reverse in Subtract and adding,
    adding a number => decrease,
    Subtracting a number => increase */

  // rend() - 1 = begin()
  // rend() - 2 = begin() + 1
  // rend() - 3 = begin() + 2
  // ========================
  // rbegin() = end() - 1
  // rbegin() + 1 = end() - 2
  // rbegin() + 2 = end() - 3
  cout << *itbeginer << "\n";
  cout << *itender << "\n";

  return 0;
}