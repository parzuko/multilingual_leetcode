#include <bits/stdc++.h>

using namespace std;

struct MinMax {
  int min_number;
  int max_number;
};


// O(n) Time Complexity -> Iterative
struct MinMax find_min(int array[], int len) {
  struct MinMax min_and_max;
  int min_number = INT_MAX;
  int max_number = INT_MIN;

  for (int i = 0; i < len; i++) {
    min_number = min(min_number, array[i]);
    max_number = max(max_number, array[i]);
  }
  min_and_max.min_number = min_number;
  min_and_max.max_number = max_number;
  
  return min_and_max;
}

int main() {
  int min_max[2];
  int array[] = {13, 4, 90, 123, 2};
  int len = sizeof(array) / sizeof(array[0]);
  struct MinMax min_and_max = find_min(array, len);
  cout << "min is: " << min_and_max.min_number << endl;
  cout << "min is: " << min_and_max.max_number << endl;
}