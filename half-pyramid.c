#include <iostream>
using namespace std;

int main() {

  int row = 5, col;

  for (int i = 1; i < row; i++) {

    col = i;
    for (int j = 0; j < col; j++) {
      cout << " * ";
    }
    cout << endl;
  }
}