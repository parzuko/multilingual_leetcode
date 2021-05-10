// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 1; i <= n; i++)

int main() {
  int n;
  cin >> n;
  loop(i, n) {
    loop(j, n - i) { cout << " "; }
    loop(j, 2 * i - 1) { cout << "*"; }
    cout << "\n";
  }
  for (int i = n; i >= 1; i--) {
    loop(j, n - i) { cout << " "; }
    loop(j, 2 * i - 1) { cout << "*"; }
    cout << "\n";
  }
}
