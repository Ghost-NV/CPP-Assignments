#include <iostream>
#include <vector>
using namespace std;

// ! failed partly, cuz it's a new function

/*  insert() forms :
  - container.insert(position, first, last);
  - container.insert(position, value);
  - container.insert(position, {value, value, ...})
  - container.insert(pos, count, value) -> (for repeat)
*/

int main()
{
  vector<int> n1 = {1, 2, 3};
  vector<int> n2 = {4, 5, 6};

  // Your Insert Code Here
  vector<int> allvectors = n1; // no need for "allvectors" at all, just use n1
  allvectors.insert(allvectors.end(), n2.begin(), n2.end());

  for (int i : allvectors)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5
// 6