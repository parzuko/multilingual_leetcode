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
    char x; cin >> x;
    int y; cin >> y;
    int n = s.length();

    set<string> vs;
    set<string> ::iterator itr;

    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++) {
            string sub = s.substr(i, len);
            vs.insert(sub);
        }

    int count = 0;    

    for (itr = vs.begin(); itr != vs.end(); itr++) {
        string cur = *itr;
        int count_of_x = 0;
        for(int j = 0; j < cur.length(); j++){
            if (cur[j] == x) {
                count_of_x++;
            }
        }
        if (count_of_x >= y) {
            count++;
        }
    }

    cout << count << "\n";

    
    return 0;
}

