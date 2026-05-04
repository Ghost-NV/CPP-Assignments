#include <iostream>
using namespace std;

// ! failed partly
// * my code
// float money(float totalmoney, int days)
// {
//   int holidays = 2;
//   int week = 7;
//   int twoweek = 14;
//   int count = days;
//   for (int i = 0; i < count; i++)
//   {
//     if (days == week)
//     {
//       return totalmoney / (days - holidays);
//     }
//     else if (days < week)
//     {
//       return totalmoney / (days);
//     }
//     else if (days > week)
//     {
//       while (days > week)
//       {
//         if (week == twoweek)
//         {
//           holidays += 2;
//         }
//         else if (week > twoweek)
//         {
//           twoweek += 7;
//         }
//         else if (week < twoweek)
//         {
//           week++;
//         }
//       }
//     }
//   }
// number < 7 -> no holidays
// number <= 7 and > 14 -> 2 holidays
// number <= 14 and > 21 -> 4 holidays
// number == 21 -> 6 holidays
// }

// ? deepseek code
// ( ahhh my pour hour spend on this task and this silly ai barely did it in 4 lines!! )
float money(float totalMoney, int days)
{
  int weeks = days / 7;
  int holidays = weeks * 2;
  int workDays = days - holidays;

  return totalMoney / workDays;
}

int main()
{
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}