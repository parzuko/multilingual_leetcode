//     ******
//    ******
//   ******
//  ******
// ******
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int n;
  cin >> n;
  loop(i, n) {
    loop(j, n - i - 1) { cout << " "; }
    loop(j, n + 1) { cout << "*"; }
    cout << "\n";
  }
}
