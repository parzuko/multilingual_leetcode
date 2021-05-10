//     1
//    2112
//   321123
//  43211234
// 5432112345
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int n;
  cin >> n;
  loop(i, n) {
    loop(j, n - i - 1) { cout << " "; }
    for (int j = i + 1; j >= 1; j--) {
      if (i + 1 == 1) {
        break;
      }
      cout << j;
    }
    loop(j, i + 1) { cout << j + 1; }

    cout << "\n";
  }
}
