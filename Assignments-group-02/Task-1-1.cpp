#include <iostream>
using namespace std;

int main() {
  cout << "int.. both value and data type are integer" << endl;
  int num1 = 20;
  cout << "---" << endl;
  cout << "output = " << num1 << endl;
  cout << "size = " << sizeof(num1) << endl;
  cout << "==============" << endl;

  cout << "int: updated.. value is double, but data type is integer so size is (4 byte)" << endl;
  num1 = 20.3;
  cout << "---" << endl;
  cout << "output = " << num1 << endl;
  cout << "size = " << sizeof(num1) << endl;
  cout << "==============" << endl;

  cout << "double.. value is integer but size is in double type (8 byte) by default" << endl;
  double dob = 10;
  cout << "---" << endl;
  cout << "output = " << dob << endl;
  cout << "size = " << sizeof(dob) << endl;
  cout << "==============" << endl;

  cout << "double: updated.. value and data type are double" << endl;
  dob = 20.5;
  cout << "---" << endl;
  cout << "output = " << dob << endl;
  cout << "size = " << sizeof(dob) << endl;
  cout << "==============" << endl;

  cout << "float.. value is double by default, but data type is float so it takes (4 byte) size by default" << endl;
  float fl = 10.5;
  cout << "---" << endl;
  cout << "output = " << fl << endl;
  cout << "size = " << sizeof(fl) << endl;
  cout << "==============" << endl;

  cout << "float: updated.. add an \"f\" to the value to make it float, but the size still 4 " << endl;
  fl = 10.5f;
  cout << "---" << endl;
  cout << "output = " << fl << endl;
  cout << "size = " << sizeof(fl) << endl;
  cout << "==============" << endl;

  cout << "auto.. remember, size always refers to the value you give to auto when you first define it for the first time, here it's intger so it's (4 byte)" << endl;
  auto maxmin = 111;
  cout << "---" << endl;
  cout << "output = " << maxmin << endl;
  cout << "size = " << sizeof(maxmin) << endl;
  cout << "==============" << endl;

  cout << "change value to double" << endl;
  maxmin = 10.5;
  cout << "---" << endl;
  cout << "output = " << maxmin << endl;
  cout << "size = " << sizeof(maxmin) << endl;
  cout << "==============" << endl;

  cout << "change value to float" << endl;
  maxmin = 10.5f;
  cout << "---" << endl;
  cout << "output = " << maxmin << endl;
  cout << "size = " << sizeof(maxmin) << endl;
  cout << "==============" << endl;

  cout << "change value to double calculated with a formula" << endl;
  maxmin = 10.5f + 5.5f;
  cout << "---" << endl;
  cout << "output = " << maxmin << endl;
  cout << "size = " << sizeof(maxmin) << endl;
  cout << "==============" << endl;

  cout << "change value to bool" << endl;
  maxmin = true;
  cout << "---" << endl;
  cout << "output = " << maxmin << endl;
  cout << "size = " << sizeof(maxmin) << endl;
  cout << "==============" << endl;

  return 0;
}