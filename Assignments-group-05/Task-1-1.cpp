#include <iostream>
using namespace std;

int main() {
  // array (1d) : [row only] ------------------- =
  int num[] = {10 , 20 , 30 , 40 , 50}; // should not write thier number in "[]"
  cout << "first number: " << num [0] << "\n"; // first elements = 0
  cout << "last: " << num [4] << "\n"; // last element = total numbers - 1
  cout << "number of elements in this array is: " << sizeof(num) / sizeof(num[0]) << "\n";
  cout << num << "\n"; // print array
  num[4] = 100; // update
  cout << num[4] << "\n"; // test update
  cout << &num; // location

  // 2d array : [row] [column] ------------------- =
  
  int arr_2d[2][3] = {
    {0, 1, 2}, 
    {3, 4, 5}
  };
  cout << arr_2d[1][2] << "\n"; //  2th row , 3th column
  cout << arr_2d[0][1] << "\n"; // 1th row , 2th column
  arr_2d[1][2] = 7; // updates the element which located in : 2th row , 3th column
  cout << "number of elements in this array-2d is: " << sizeof(arr_2d) / sizeof(arr_2d[0][0]) << "\n";

  // 3d array : [depth] [row] [column] ------------------- =
  int arr_3d[2][2][3] = {
    {{0, 1, 2}, {3, 4, 5}},
    {{6, 7, 8}, {9, 10, 11}}
  };
  cout << arr_3d[0][1][2] << "\n"; // first layer , second row , third column
  cout << arr_3d[1][0][1] << "\n"; // 2th layer , 1th row , 2th column
  arr_3d[0][1][2] = 22; // updates the element which located in : 1th layer , 2th row , 3th column
  cout << "number of elements in this array-3d is: " << sizeof(arr_3d) / sizeof(arr_3d[0][0][0]) << "\n";


  return 0;
}