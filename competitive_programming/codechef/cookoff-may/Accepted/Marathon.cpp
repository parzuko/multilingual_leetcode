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
        int D, d, A, B, C;
        cin >> D >> d >> A >> B >> C;
        const int A_distance = 10;
        const int B_distance = 21;
        const int C_distance = 42;

        int total_distance = D * d;
        if (total_distance >= C_distance) {
            cout << C << "\n";
            continue;
        }
        if (total_distance >= B_distance) {
            cout << B << "\n";
            continue;
        }
        if (total_distance >= A_distance) {
            cout << A << "\n";
            continue;
        }
        cout << 0 << "\n";

    }
    return 0;
}

