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

    
    int n; cin >> n;
    int k; cin >> k;
    int x; cin >> x;

    mk(arr,n,int);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int prev_diff = arr[0];
    for(int i =1;i<n;i++) {
        if(k==0){
            cout<<i<<"\n";
            break;
        }
        if (arr[i] < prev_diff) {
            prev_diff = arr[i];
            continue;
        }
        else if(x!=0){
            prev_diff = arr[i];
            x--;
            continue;
        }else{
            prev_diff = arr[i];
            k = k- arr[i] - prev_diff;
        }
    }


    return 0;
}

