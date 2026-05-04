#include <iostream>
#include <vector>
using namespace std;

// Write Your Function Here

int beforeresult(int num, int repeat_num)
{
  int result = 0;
  vector<int> repeat = {num};
  for (int i = 0; i < repeat_num + 1; i++)
  {
    repeat.push_back(num - 1);
    num = num - 1;
    cout << repeat.at(i);
    if (i == repeat_num)
    {
      break;
    }
    else
    {
      cout << " + ";
    }
  }

  for (int p = 0; p < repeat_num + 1; p++)
  {
    result += repeat[p];
  }
  cout << " = ";
  return result;
}

int main()
{
  cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  // Main Number [10]
  // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
  cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  // Main Number [1015
  // Numbers Before [14 + 13 + 12] <- 3 Numbers
  return 0;
}