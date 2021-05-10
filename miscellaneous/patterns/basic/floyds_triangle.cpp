// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int n, counter;
  cin >> n;
  counter = 1;
  loop(i, n) {
    loop(j, i + 1) {
      cout << counter << " ";
      counter++;
    }
    cout << "\n";
  }
}