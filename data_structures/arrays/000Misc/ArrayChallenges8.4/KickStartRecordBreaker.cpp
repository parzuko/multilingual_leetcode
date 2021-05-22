#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mod             1000000007
#define printv(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout<<*it<<" "; cout<<endl
#define inf             1e18
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

void parzuko()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int32_t main()
{
    parzuko();
    int x = 1;
    w(t) {
        // input only
        int n; cin >> n;
        mk(arr, n, int);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // edge case
        if (n == 1) {
            cout << "Case#" << x << ":" << " " << 1 << "\n";
            x++;
            continue;
        }

        // initializing
        int number_of_record_breaking_days = 0;
        int prev_max = -(inf);

        // logic
        for(int i = 0; i < n; i++) {
            if (i == 0) {
                if (arr[i] > arr[i + 1]){
                    number_of_record_breaking_days++;
                }
            }
            else if (i == n - 1) {
                if (arr[i] > prev_max) {
                    number_of_record_breaking_days++;
                }
            }
            else {
                if (arr[i] > prev_max && arr[i] > arr[i + 1]) {
                    number_of_record_breaking_days++;
                }
            }
            prev_max = max(prev_max, arr[i]);
        }

        // answer
        cout << "Case#" << x << ":" << " " << number_of_record_breaking_days << "\n";
        x++;
    }
    return 0;
}

