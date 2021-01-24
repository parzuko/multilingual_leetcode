#include <bits/stdc++.h>
using namespace std;

void move_negatives(int array[], int len) {
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (array[i] < 0) {
      swap(array[i], array[j]);
      j++;
    }
  }
}

int main() {
  // code
  int array[] = {1, 24, -15, -1, 5125, 12, -1241, -4124, -124151, -12};
  int len = sizeof(array) / sizeof(array[0]);
  move_negatives(array, len);
  cout << "The Modified Array Is:\n";
  for (int i = 0; i < len; i++) {
    cout << array[i] << " ";
  }
  cout << "\n";
}