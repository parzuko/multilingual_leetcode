#include <bits/stdc++.h>
using namespace std;


// O(n) time O(1) space but not optimal
void count_zero_one_two(int array[], int len) {
  int zero = 0;
  int one = 0;
  int two = 0;
  for (int i = 0; i < len; i++) {
    if (array[i] == 0) {
      zero++;
    }
    if (array[i] == 1) {
      one++;
    }
    if (array[i] == 2) {
      two++;
    }
  }
  int i = 0;
  while (zero--) {
    array[i++] = 0;
  }
  while (one--) {
    array[i++] = 1;
  }
  while (two--) {
    array[i++] = 2;
  }
}

int main() {
  // codes
  int array[] = {1, 0, 2, 1, 0, 0, 0, 1, 2, 2, 2, 1, 0};
  int len = sizeof(array) / sizeof(array[0]);
  count_zero_one_two(array, len);
  for (int i = 0; i < len; i++) {
    cout << array[i] << " ";
  }
  cout << "\n";
}