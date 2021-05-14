#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n == 1){
            cout << "1\n";
            continue;
        }
        if (n == 2){
            cout << "-1\n";
            continue;
        }
        int matrix[n][n];
        int k = 1;
        bool no_skip = true;
        for (int i =0; i<n;i++){
            for(int j=0;j<n;j++){
                if(no_skip){
                    matrix[i][j] = k;
                    k++;
                }
                no_skip = !no_skip;

            }
        }
        no_skip = false;
        for (int i =0; i<n;i++){
            for(int j=0;j<n;j++){
                if(no_skip){
                    matrix[i][j] = k;
                    k++;
                }
                no_skip = !no_skip;

            }
        }

        for (int i =0; i<n;i++){
            for(int j=0;j<n;j++){
                cout << matrix[i][j] <<" ";
            }
            cout << "\n";
        }
    }

}