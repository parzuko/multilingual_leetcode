// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 1; i <= n; i++)

int main() {
  int n;
  cin >> n;
  loop(i, n) {
    loop(j, i) { cout << "*"; }
    int space = 2 * n - 2 * i;
    loop(j, space) { cout << " "; }
    loop(j, i) { cout << "*"; }

    cout << "\n";
  }

  for (int i = n; i >= 1; i--) {
    loop(j, i) { cout << "*"; }
    int spaces = 2 * n - 2 * i;
    loop(j, spaces) { cout << " "; }
    loop(j, i) { cout << "*"; }

    cout << "\n";
  }
}