#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int total_phone, int used_phone, int cost_phone, double tax)
{
  int profit = 0;
  int new_phone = total_phone - used_phone; // 40
  new_phone *= cost_phone;
  used_phone *= cost_phone - 200;
  profit = (new_phone + used_phone) * ((100 - tax) / 100);
  return profit;
}
int main()
{
  // used_phone = 600 , new_phone = 800
  // 20 = 20% here below
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}