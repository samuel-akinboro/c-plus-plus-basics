#include <iostream>
using namespace std;

int main() {
  string cars[] = {"Audi", "BMW", "Benz", "tesla"};

  // to get length of array
  cout << sizeof(cars) / sizeof(string) << endl;

  // for each
  for (string j : cars){
    cout << j << endl;
  }
}