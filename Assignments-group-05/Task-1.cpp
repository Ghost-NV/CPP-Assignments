#include <iostream>
using namespace std;

int main() {
  int nums[]{100, 300, 600, 900};
  string awards[]{"iPhone", "iPad", "PC", "Car  "};
  int num_in;
  cin >> num_in;
  if (num_in == nums[0]) {
    cout << "Number " << nums[0] << " Award Is: " << "iPhone" << "\n";
  }
  if (num_in == nums[1]) {
    cout << "Number " << nums[1] << " Award Is: " << "iPad" << "\n";
  }
  if (num_in == nums[2]) {
    cout << "Number " << nums[2] << " Award Is: " << "PC" << "\n";
  }
  if (num_in == nums[3]) {
    cout << "Number " << nums[3] << " Award Is: " << "car" << "\n";
  }

  // Output Needed
  // "Number 100 Award Is: iPhone"
  // "Number 300 Award Is: iPad"
  // "Number 600 Award Is: PC"
  // "Number 900 Award Is: Car"
  return 0;
}