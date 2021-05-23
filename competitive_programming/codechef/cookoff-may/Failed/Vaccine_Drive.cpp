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
        int G, P;
        cin >> G >> P;
        mk(arr, 10, int);
        for(int i=0;i<10;i++)
            cin >> arr[i];

        
        int chef_group = 11 - G;
        int min_days = -1;
        int max_days = -1;

        int n = sizeof(arr) / sizeof(arr[0]);
        reverse(arr, arr + n);

        if(G == 9) {
            cout << 1 << " " << 1 << "\n";
            continue;
        }

        for(int i = 1; i <= 10; i ++) {
            int vac_available = P;
            while(vac_available != 0 && i <= 10) {
                if (chef_group == i - 1) {
                    if (vac_available >= arr[i]) {
                        min_days = i - 1;
                        max_days = i - 1;
                        break;
                    } else {
                        min_days = i - 1;
                        max_days = i;
                        break;
                    }
                }
                vac_available = vac_available - arr[i];
                i++;
            }
        }
        cout << min_days << " " << max_days << "\n";
    }
    return 0;
}

