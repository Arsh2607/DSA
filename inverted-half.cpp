#include <iostream>

using namespace std;

int main() {

  int row = 5, col;

  for (int i = 0; i < row; i++) {

    for (int j = 5; j > i; j--) {
      cout << " * ";
    }
    cout << endl;
  }
}