#include <iostream>
#include <bitset>
#include <climits>
using namespace std;

int main() {
  cout << int('x') << endl; // output is "120" (as an integer value)
  cout << char(38) << endl; // output is "&" (in ASCII)
  cout << bitset<8>('x') << endl; // output is 01111000 (in binary)


  cout << "==============================\n";
  typedef long long int bignum1; // "typedef" gives a alias name
  bignum1 longnum = 10101;
  cout << longnum << endl;
  cout << sizeof(longnum) << endl;

  using bignum2 = long long int; // another way, same result.. 
  bignum2 longnum2 = 10110101011;
  cout << longnum2 << endl;
  cout << sizeof(longnum2) << endl;

  cout << "==============================\n";
  // can be used with other modifires, for example you can use "unsigned" with "short" to store 0 to 65,535 instead of -32,768 to 32,767
  signed char a = 'H'; // store numbersr from 127 to -128 , and a character like a/%/& , size is 1 byte (8 bit)
  signed int b = 11; // store numbers only (technically from -2 billion to ~ 2 billion), size is 4 bytes (doesn't have a real value for you cause "int" is enough and do the same thing)
  // * --------
  unsigned char c = 'T'; // store positive numbers only, from 0 to 255, and a character
  unsigned int d = 13; // store positive numbers only, from 0 to 4 billion

  // long , short... you can use short with int only, long with int and double
  short e = 14; // store -32,768 to 32,767, size is 2 byte
  int f = 15; // store -2 billion to 2 billion, size is 4 byte (by default)
  long long g = 16; // store -9 Quantillion to 9 Quantillion , size is 8 byte
  long double h = 123456789.1234; // store about 20+ number not 16 as "double" or 8 as "float", size is 8/10/12/16 byte.. depends on the OS

  cout << a << "\t" << sizeof(a) << endl;
  cout << b << "\t" << sizeof(b) << endl;
  cout << c << "\t" << sizeof(c) << endl;
  cout << d << "\t" << sizeof(d) << endl;
  cout << e << "\t" << sizeof(e) << endl;
  cout << f << "\t" << sizeof(f) << endl;
  cout << g << "\t" << sizeof(g) << endl;
  cout << h << "\t" << sizeof(h) << endl;

  // Explicit Conversion
  char r = 'C';
  double p = 20.5;
  cout << r + p << "\n"; // 67 + 20
  cout << int(r) << endl; // convertd to integer
  cout << (int)r << endl; // same thing
  cout << p << endl; // default was double
  cout << int(p) << endl; // convertd to int

  int int1;
  double doub1 = 10.5;
  int1 = doub1; // Implicit Conversion, int1 = 10, doub1 = 10.5
  cout << sizeof(int1) << endl;
  cout << sizeof(int1 * int1) << endl; // 4 byte
  cout << sizeof(int1 * doub1) << endl; // 8 byte
  cout << int1 << endl;

}