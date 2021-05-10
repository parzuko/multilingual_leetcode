// * * * *
// * * * *
// * * * *
// * * * *
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int row, column;
  cin >> row >> column;

  loop(i, row) {
    loop(j, column) { cout << "*"; }
    cout << "\n";
  }
}
