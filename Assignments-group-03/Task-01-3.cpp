#include <iostream>
using namespace std;
int main() {  

  // pre/post increment , pre/post decrement
  int inc_pre = 0;
  cout << inc_pre++ << "\n"; // 0
  cout << inc_pre << "\n"; // 1
  int dec_pre = 0;
  cout << dec_pre-- << "\n"; // 0
  cout << dec_pre << "\n"; // - 1

  int inc_post = 0;
  cout << ++inc_post << "\n"; // 1
  cout << inc_post << "\n"; // 1
  int dec_post = 0;
  cout << --dec_post << "\n"; // -1
  cout << dec_post << "\n"; // - 1

  return 0;
}

