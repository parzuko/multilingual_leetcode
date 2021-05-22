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

    string s; cin >> s;
    int x; cin >> x;

    sort(s.begin(), s.end());

    int prev = s[0];
    bool valid = true;
    for(int i = 1; i<s.length();i++){
        if (prev == s[i]) {
            valid = false;
            break;
        }else{
            prev = s[i];
        }
    }
    if(valid) {
        cout << s << "\n";
    }else {
        cout << -1 << "\n";
    }



    return 0;
}

