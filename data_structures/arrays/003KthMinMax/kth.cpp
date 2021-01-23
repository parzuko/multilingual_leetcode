// There is another application of max_heap and min_heap

#include <bits/stdc++.h>

using namespace std;

struct KthMinMax {
  int min;
  int max;
};

struct KthMinMax find_kth(int array[], int k, int len) {
  int kth_min = array[k - 1];
  int kth_max = array[len - k];
  KthMinMax min_max;
  min_max.min = kth_min;
  min_max.max = kth_max;
  return min_max;
}

int main() {
  // code
  int array[] = {141, 51, 551, 63, 422, 15156, 221, 2, 4};
  int len = sizeof(array) / sizeof(array[0]);

  // will eventually learn quick/merge sort so this is ok
  sort(array, array + len);
  int kth = 2;  // make this cin potentially

  KthMinMax kth_min_max = find_kth(array, kth, len);
  cout << "The Kth Min Is: " << kth_min_max.min << endl;
  cout << "The Kth Max Is: " << kth_min_max.max << endl;
}

/*

1,2,4,5,6,7,8,9

if k = 1
len = 9

max = len - k - 1
min = k - 1
*/