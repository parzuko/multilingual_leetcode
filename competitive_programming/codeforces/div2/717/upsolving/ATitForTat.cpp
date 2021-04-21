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
    int n, k;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++) {
      cin >> array[i];
    }

    int j = 0;
    while (k--) {
      while (array[j] == 0 && j < n - 1) {
        j++;
      }
      if (j == n - 1) {
        break;
      }
      array[j]--;
      array[n - 1]++;
    }
    for (int i = 0; i < n; i++) {
      cout << array[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}