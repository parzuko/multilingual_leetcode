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
        int n;
        cin >> n;
        mk(arr, n, int);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }

        int common_difference = arr[1] - arr[0];
        int curr_subarray_length = 2;
        int max_length = -(inf);


        for (int i = 2; i < n; i++){
            if (common_difference == arr[i] - arr[i - 1]) {
                curr_subarray_length ++ ;
                max_length = max(max_length, curr_subarray_length);
            } else {
                common_difference = arr[i] - arr[i - 1];
                curr_subarray_length = 2;
            }
        }
        cout << "Case#" << x << ":" << " " << max_length << "\n"; 
        x++;
    }
    return 0;
}

