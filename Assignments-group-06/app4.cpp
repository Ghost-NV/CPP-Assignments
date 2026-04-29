#include <iostream>
using namespace std;

int main()
{

  // todo : Guess The Number
  // ! instructor code (cuz he didn't explain as will as i could get it then)
  int guessNumber = 7;
  int guessTries = 0;
  int choose;
  cout << "Please Guess The Number Between 1 & 10\n";

  while (true)
  {
    cin >> choose;
    if (choose == guessNumber)
    {
      cout << "Great, Correct Guess\n";
      break;
    }
    else
    {
      cout << "Sorry, Wrong Guess\n";
      guessTries++;
    }
    if (guessTries == 3)
    {
      cout << "Sorry, You Failed. The Number Is: " << guessNumber << "\n";
      break;
    }
  }
}