// * * * *
// *     *
// *     *
// *     *
// *     *
// * * * *
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int row, column;
  cin >> row >> column;

  loop(i, row) {
    loop(j, column) {
      // if first column or last column or first row or last row
      if (j == 0 || j == column - 1 || i == row - 1 || i == 0) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}