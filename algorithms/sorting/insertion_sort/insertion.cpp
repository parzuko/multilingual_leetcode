#include <iostream>
using namespace std;

void print_array(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertion_sort(int unsorted_arr[], int length) {
    for (int i = 1; i < length; i++) {
        int current = unsorted_arr[i];
        int j = i - 1;
        while (j >= 0 && unsorted_arr[j] > current) {
            unsorted_arr[j + 1] = unsorted_arr[j];
            j--;
        }
        unsorted_arr[j + 1] = current;
    }
}

int main() {
    int arr[] = {25, 32, 81, 7, 12, 92, 64, 16};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "OG Array:\n";
    print_array(arr, length);
    
    insertion_sort(arr, length);
    
    cout << "After Sorting:\n";
    print_array(arr, length);
}