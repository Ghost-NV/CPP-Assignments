#include <iostream>
using namespace std;

int num = 50; // changed the order..

int read()
{
  int num = 100; // with this
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}