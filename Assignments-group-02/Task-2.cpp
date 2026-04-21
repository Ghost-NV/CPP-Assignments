#include <iostream>
using namespace std;

double salary = 5000.98;
// 8 Bytes
// 64 Bits
int main() {
  cout << sizeof(salary) << "\t" << "bytes" << endl;
  cout << sizeof(salary) * 8 << "\t" << "bit" << endl;
}