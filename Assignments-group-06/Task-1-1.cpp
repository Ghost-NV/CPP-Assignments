#include <iostream>
using namespace std;

int main() {
  // nesting in for
  string products[] = {"Item 1","Item 2","Item 3"};
  string sizes[] ={"Small","Large", "X-Large"};

  for (int i = 0; i < 3; i++) {
    cout << "Product Name: \n";
    cout << products[i];
    cout << "\n";
    cout << "size:\n";
    for (int g = 0; g < 3; g++) {
      cout << sizes[g];
      if (g < 2) {
        cout << ", ";
      }
    }
    for (int l = 0; l < 2; l++ ) {
      cout << "\n=====================\n";
    }
  }

  /*
    output needed
    Product Name:
    Item 1
    Sizes:
    Small, Large, X-Large
    =====================
    output needed
    Product Name:
    Item 2
    Sizes:
    Small, Large, X-Large
    =====================
    Product Name:
    Item 3
    Sizes:
    Small, Large, X-Large
  */
  return 0;
}