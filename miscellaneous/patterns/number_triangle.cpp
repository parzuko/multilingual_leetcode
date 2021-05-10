// 1
// 2 2
// 3 3 3 
// 4 4 4 4
// This is the pattern

#include <iostream>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    cin >>n;
    loop(i,n){
        loop(j,i+1){
            cout << i+1;
        }
        cout << "\n";
    }
}