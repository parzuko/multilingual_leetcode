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
        int n, m, k;
        cin >> n >> m >> k;
        mk(arr, k, int);

        for(int i = 0; i < k; i++) {
            cin >> arr[i];
        }

        int si = sizeof(arr) / sizeof(arr[0]);
        int max_el = *max_element(arr, arr + n);

        int temp[max_el + 1] = {0};

        for(int i =0; i < k; i++){
            temp[arr[i]] ++;
        }

        int ans[k] = {0};
        int j = 0;
        for(int i = 0; i <max_el + 1; i++) {
            if (temp[i] > 1 && (i>= n + 1 && i <= n + m)) {
                ans[j] = i;
                j++;
            }
        }

        cout << j << " ";
        for(int i = 0; i < j; i++ ){
            cout << ans[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}

