#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++){
    if(i == 5) {
      cout << "variable i just clocked 5";
      break;
    }else{
      cout << "variable i is less than 5" << "\n";
    }
  }
}