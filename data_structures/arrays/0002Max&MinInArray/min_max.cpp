#include <bits/stdc++.h>

using namespace std;

struct MinMax {
  int min_number;
  int max_number;
};


// O(n) Time Complexity -> Iterative
struct MinMax find_min_max(int array[], int len) {
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

struct MinMax find_min_max_recursively(int array[], int low, int high){
    struct MinMax min_and_max, min_max_left, min_max_right;
    int mid;

    if (low == high){
        min_and_max.min_number = array[low];
        min_and_max.max_number = array[low];
    } 
    
    if (low == high +1 ){
        if (array[low] > array[high]){
            min_and_max.min_number = array[high];
            min_and_max.max_number = array[low];
        }else{
            min_and_max.min_number = array[low];
            min_and_max.max_number = array[high];
        }
        return min_and_max;
    }

    mid = (low+high)/2;
    min_max_left = find_min_max_recursively(array, low, mid);
    min_max_right = find_min_max_recursively(array, mid + 1, high);

    min_and_max.min_number = min(min_max_left.min_number, min_max_right.min_number);
    min_and_max.max_number = max(min_max_left.max_number, min_max_right.max_number);

    return min_and_max;
}

int main() {
  int array[] = {13, 4, 90, 123, 2};
  int len = sizeof(array) / sizeof(array[0]);
  struct MinMax min_and_max = find_min_max(array, len);
  cout << "min is: " << min_and_max.min_number << endl;
  cout << "min is: " << min_and_max.max_number << endl;
}