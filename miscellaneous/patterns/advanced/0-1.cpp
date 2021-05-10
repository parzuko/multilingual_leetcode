// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
  int n;
  cin >> n;
  bool should_print_one = true;
  loop(i, n) {
    loop(j, i + 1) {
      if (should_print_one)
        cout << 1 << " ";
      else
        cout << 0 << " ";
      should_print_one = !should_print_one;
    }
    cout << "\n";
  }
}
