#include <iostream>
using namespace std;

int main() {
  int age = 16;
  int points = 700; 
  int rank = 3;

  // condition syntax
  int age_us = 17;
  int points_us = 500;
  // .. "?" is true .. ":" is false
  cout << endl << (age >= 16 ? "Age Is OK-444\n" : "Age Is Not OK-444\n");

  // using it with varibales
  string cond_msg = points >= 400 ? "points Is OK-333\n" : "points Is Not OK-333\n";
  cout << cond_msg << endl;

  // nested syntax condition
  cout << (age >= 16 ? "Age Is OK-222\n" : (age >= 13 ? "Age Is K-222\n" : "Age Is Not k-222\n"));

  return 0;
}