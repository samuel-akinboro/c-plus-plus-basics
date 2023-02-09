#include <iostream>
using namespace std;

int main() {
  string cars[] = {"Audi", "BMW", "Benz", "tesla"};

  cout << sizeof(cars) << endl;

  // for each
  for (string j : cars){
    cout << j << endl;
  }
}