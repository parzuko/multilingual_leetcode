//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int n;
  cin >> n;
  loop(i, n) {
    loop(j, n - i - 1) { cout << " "; }
    loop(j, i+1) { cout << j + 1 << " "; }
    cout << "\n";
  }
}
