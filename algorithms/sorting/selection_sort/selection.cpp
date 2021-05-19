#include <iostream>
using namespace std;


int main() {
    
    int unsorted_arr[] = {15155, 124, 9824, 12, 12, 5};
    int length = sizeof(unsorted_arr) / sizeof(unsorted_arr[0]);
    
    cout << "UnSorted Arry Is: \n";
    for (int i =0; i < length; i++) {
        cout << unsorted_arr[i] << " ";
    }
    cout << "\n";
    
    
    
    // selection sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++){
            if (unsorted_arr[j] < unsorted_arr[i]) {
                int temp = unsorted_arr[j];
                unsorted_arr[j] = unsorted_arr[i];
                unsorted_arr[i] = temp;
            }
        }
    }
    cout << "Now Sorted Arry Is: \n";
    for (int i =0; i < length; i++) {
        cout << unsorted_arr[i] << " ";
    }
    cout << "\n";
}