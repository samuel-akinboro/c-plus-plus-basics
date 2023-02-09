#include <iostream>
using namespace std;

int main() {
  string cars[4] = {"Audi", "BMW", "Benz", "tesla"};

  for(int i = 0; i < 4; i++) {
    cout << cars[i] << " for loop" << endl;
  }

  // for each
  for (string j : cars){
    cout << j << endl;
  }
}