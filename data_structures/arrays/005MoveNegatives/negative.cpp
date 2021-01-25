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

void move_using_two_pointers(int array[], int len) {
  int left = 0;
  int right = len - 1;

  while (left <= right) {
    if (array[left] < 0 && array[right] < 0) {
      left++;
    } else if (array[left] > 0 && array[right] < 0) {
      swap(array[left], array[right]);
      left++;
      right--;
    } else if (array[left] > 0 && array[right] > 0) {
      right--;
    } else {
      left++;
      right--;
    }
  }
}

int main() {
  // code
  int array[] = {1, 24, -15, -1, 5125, 12, -1241, -4124, -124151, -12};
  int len = sizeof(array) / sizeof(array[0]);
  // move_negatives(array, len);
  move_using_two_pointers(array, len);
  cout << "The Modified Array Is:\n";
  for (int i = 0; i < len; i++) {
    cout << array[i] << " ";
  }
  cout << "\n";
}