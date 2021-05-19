#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int unsorted_arr[], int length){
    for(int i = 0; i < length - 1; i++){
        for(int j = i + 1; j < length; j++){
            if (unsorted_arr[j] < unsorted_arr[i]) 
                swap(&unsorted_arr[i], &unsorted_arr[j]);
        }
    }
}

void print_array(int arr[], int length){
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main() {
    
    int arr[] = {15155, 124, 9824, 142, 12, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    cout << "UnSorted Arry Is: \n";
    print_array(arr, length);
    
    selection_sort(arr, length);
    
    cout << "Now Sorted Arry Is: \n";
    print_array(arr, length);
}