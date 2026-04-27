#include <iostream>
using namespace std;

int main() {
  // todo : guess the sequences simple app
  cout << "guess the sequences" << endl;
  int points = 0;
  int sequences [3] [5] = { 
    {1, 1, 2, 3, 5}, 
    {1, 2, 4, 8, 16},
    {2, 4, 8, 64, 4096}
  };

  cout << "{1, 1, 2, 3, ??}" << endl;
  cin >> sequences [0] [4];

  cout << "{1, 2, 4, 8, ??}" << endl;
  cin >> sequences [1] [4];

  cout << "{2, 4, 8, 64, ??}" << endl;
  cin >> sequences [2] [4];

  if (sequences[0][4] == 5) { points++; }
  if (sequences[1][4] == 16) { points++; }
  if (sequences[2][4] == 4096) { points++; }
  cout << "your points are: " << points << endl;
  return 0;
}