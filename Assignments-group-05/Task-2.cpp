#include <iostream>
using namespace std;

int main() {
  int check = 25;
  int nums[]{40, 20, 30, 70, 100};
  if (check <= nums[0]) { cout << "{" << nums[0] << "} + {" << nums[3] << "} = " << nums[0] + nums[3] << "\n"; } 
  else { cout << "not valid" << "\n"; }

  if (check <= nums[1]) { cout << "{" << nums[1] << "} + {" << nums[3] << "} = " << nums[1] + nums[3] << "\n"; }
  else { cout << "not valid" << "\n"; }
  
  if (check <= nums[2]) { cout << "{" << nums[2] << "} + {" << nums[3] << "} = " << nums[2] + nums[3] << "\n"; }
  else { cout << "not valid" << "\n"; }

  // Ouput : "{40} + {70} = 110"
}