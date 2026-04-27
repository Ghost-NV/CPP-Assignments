#include <iostream>
using namespace std;

int main() {
  int filling = 10;
  int vals[]{100, 200, 300, 400};

  // Write One Line Of Code Here To Fill Array Value With Number 10
  vals[0] = filling , vals[1] = filling , vals[2] = filling , vals[3] = filling;
  // "vals.fill(filling);" was the common and prohibited way in this task
  cout << vals[0] << "\n"; // 10
  cout << vals[1] << "\n"; // 10
  cout << vals[2] << "\n"; // 10
  cout << vals[3] << "\n"; // 10
  return 0;
}