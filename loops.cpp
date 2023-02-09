#include <iostream>
using namespace std;

int main() {
  int i = 0;
  int j = 10;
  
  // practicing each loops
  while(i < 5) {
    cout << "while " << i << "\n";
    i++;
  };

  // do while loop
  do {
    cout << "do while" << j << "\n";
    j--;
  }
  while(j > 0);

  // for loop
  for (int k = 0; k < 10; k++){
    cout << k << '\n';
  }
}