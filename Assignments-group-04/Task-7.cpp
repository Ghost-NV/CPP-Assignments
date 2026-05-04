#include <iostream>
using namespace std;

int main() {

int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 5 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;
// =-=-=-=-=
int val1 = num1 % 2;
int val2 = num2 % 2;
int val3 = num3 % 2;
int val4 = num4 % 2;
if (val1 == 0 && num1 <= 20) result = result + num1;
if (val2 == 0 && num2 <= 20) result = result + num2;
if (val3 == 0 && num3 <= 20) result = result + num3;
if (val4 == 0 && num4 <= 20) result = result + num4;
cout << result << endl;

/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 15 => Not Even Number
  [Number 2] 16 => Smaller Than 20 And Even Number
  0 + 16 = 16
  [Number 3] 22 => Not Smaller Than 20
  [Number 4] 8  => Smaller Than 20 And Even Number
  16 + 8 = 24

  =================================

  Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 30

  "Explain"
  Starting Result Is 0
  [Number 1] 100 => Not Smaller Than 20
  [Number 2] 11  => Not Even Number
  [Number 3] 12  => Smaller Than 20 And Even Number
  0 + 12 = 12
  [Number 4] 18  => Smaller Than 20 And Even Number
  12 + 18 = 30
*/

  return 0;
}