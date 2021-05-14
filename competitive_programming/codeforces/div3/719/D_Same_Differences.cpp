#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long answer = 0;
        map<long long, long long>count;
        for(long long i = 0; i < n; i++){
            long long cur;
            cin >> cur;
            cur -= i;
            answer += count[cur];
            count[cur]++;
        }
        cout<< answer << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}