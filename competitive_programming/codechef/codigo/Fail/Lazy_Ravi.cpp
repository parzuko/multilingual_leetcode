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

    w(t) {
        int n; cin >> n;
        mk(arr, 55, int);
        int res = 0;
        int count = 0;
        for(int i =0; i<55;i++){
            if (res == n) {
                cout << count << "\n";
                break;
            }
            count ++;
            res+=arr[i];
        }


    }
    return 0;
}

