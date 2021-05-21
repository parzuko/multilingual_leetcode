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
        int n;
        cin >> n;
        vi v;
        
        while(n!=0){
            int rem = n % 2;
            v.insert(v.begin(), 1, rem);
            n = n / 2;
        }
        int l = v.size();
        l--;
        int ans = pow(2, l);
        ans--;
        cout << ans << "\n";
        
    }
    return 0;
}

