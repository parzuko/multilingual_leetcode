#include <bits/stdc++.h>
using namespace std;

// O(n^2)
void subarray_sum(int arr[], int n) {
    int result = 0;
    int temp = 0;
    for(int i = 0; i < n; i++) {
        temp = 0;
        for(int j = i; j < n; j++) {
            temp += arr[j];
            result += temp;
        }
    }
    cout << "The Sum Of Given Subarray in O(n^2) is: " << result << "\n";
}

// O(n)
void sub_sum(int arr[], int n) {
    // if subarray starts with number then -> ( n - i ) such exist
    // if just an element -> ( n - i ) * i such exist 
    // total would be for each -> { ( n - i ) * ( i + 1 ) }
    long int result = 0;
    for(int i = 0; i < n; i++) {
        result += arr[i] * ( n - i ) * ( i + 1 );
    }
    cout << "The Sum Of Given Subarray in O(n) is: " << result << "\n";

}

int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};
    subarray_sum(arr, n);
    sub_sum(arr, n);
}