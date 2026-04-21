#include <iostream>
using namespace std;
double age;

int agefn(){
  cout << "the years you've lived are \t";
  cout << age << " years\n";
  cout << "the months you've lived are \t";
  cout << age * 12 << " months\n";
  cout << "the weeks you've lived are \t";
  cout << age * 52 << " weeks\n";
  cout << "the days you've lived are \t";
  cout << age * 365 << " days\n";
  return 0;
}

int main() {
  cout << "==============================\n";
  cout << "Year old tracker\n";
  cout << "==============================\n";
  cin >> age; /* input */
  agefn();
  cout << "==============================\n";
  cout << "I hope you enjoyed my fast project\n";
  cout << "==============================\n";
  return 0;
}
