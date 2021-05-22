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

    // input 
    int n;
    cin >> n;
    mk(arr, n ,int);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // initialization
    int min_index_of_repeating = inf;
    mk(copies,n,int);
    for(int i = 0; i < n; i++) {
        copies[i] = -1;
    }

    // logic
    for(int i = 0; i < n; i++) {
        int current_element = arr[i];
        
        // check if that element has been seen
        if (copies[current_element] == -1) {
            // on Aith index of copies, put index of iterator
            copies[current_element] = i;
        } else {
            min_index_of_repeating = min(min_index_of_repeating, copies[current_element]);
        }
    }

    cout << min_index_of_repeating + 1 << "\n";

    
    return 0;
}

