#include <bits/stdc++.h>

using namespace std;

void dutch_national_flag(int array[], int len) {
  int low = 0;
  int high = len - 1;
  int mid = 0;

  while (mid <= high) {
    switch (array[mid]) {
      case 0:
        swap(array[low++], array[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(array[high--], array[mid]);
    }
  }
}
