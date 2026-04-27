#include <iostream>
using namespace std;

int main() {
  int ex1[] = {100, 200, 600, 200, 100};
  if (ex1[0] == ex1[4] && ex1[1] == ex1[3] ) {
      cout << "Array Is Palindrome" << "\n";
  }
  else {
    cout << "Array Is Not Palindrome" << "\n";
  }

  int ex2[] = {100, 200, 200, 100};
  if (ex2[0] == ex2[3] && ex2[1] == ex2[2] ) {
    cout << "Array Is Palindrome" << "\n";
  }
  else {
    cout << "Array Is Not Palindrome" << "\n";
  }
  
  int ex3[] = {100, 300, 600, 200, 100};
  if (ex3[0] == ex3[4] && ex3[1] == ex3[3] ) {
    cout << "Array Is Palindrome" << "\n";
  }
  else {
    cout << "Array Is Not Palindrome" << "\n";
  }

  // Example 1
  // Output "Array Is Palindrome"
  // Example 2
  // Output "Array Is Palindrome"
  // Example 3
  // Output "Array Is Not Palindrome"

  return 0;
}