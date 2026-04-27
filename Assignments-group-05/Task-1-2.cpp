#include <iostream>
#include <array>
using namespace std;

int main() {
  // entire of this code requers <array>
  array<int , 4>aryo = {10 , 20 , 30 ,40}; // class template (need #include <array>): array< , >  = { , , , }
  array<array<int , 4> , 5> sequence_2d; // 2d
  array<array<array<int , 3>, 4> , 5> sequence_3d; // 3d
  cout << aryo.front() << "\n"; // first element
  cout << aryo.back () << "\n"; // last element
  cout << aryo.at(0) << "\n"; // print the selected element in the array
  cout << aryo.size() << "\n"; // count the elements
  cout << aryo.empty() << "\n"; // check if the array is empty (0 is false 1 is true)
  aryo.fill(100);
  cout << aryo[0] << "\n";
  aryo.fill('A');
  cout << aryo[0] << "\n";

  return 0;
}