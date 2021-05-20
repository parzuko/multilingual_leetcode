#include <bits/stdc++.h>
using namespace std;

#define watch(x) cout << (#x) << " " << (x)
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 100000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int array[n];
    int xor_total = 0;
    for (int i = 0; i < n; i++) {
      cin >> array[i];
      xor_total ^= array[i];
    }
    if (xor_total == 0) {
      cout << "YES\n";
      continue;
    }
    int prefix[n];
    int suffix[n];

    prefix[0] = array[0];
    suffix[n - 1] = array[n - 1];

    for (int i = 1; i < n; i++) {
      prefix[i] = prefix[i - 1] ^ array[i];
    }

    for (int i = n-2; i >=0;i--){
        suffix[i]= suffix[i+1]^array[i];
    }
    

  }

  return 0;
}