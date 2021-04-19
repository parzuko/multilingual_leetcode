#include <bits/stdc++.h>
using namespace std;

int get_index(vector<int> v, int K) {
  auto it = find(v.begin(), v.end(), K);

  if (it != v.end()) {
    int index = it - v.begin();
    return index;
  } else {
    return -1;
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> v = {};
    while (n--) {
      int x;
      cin >> x;
      v.push_back(x);
    }

    unordered_map<int, int> counts;
    for (const auto& elem : v) ++counts[elem];

    for (auto& it : counts) {
      // Do stuff
      if (it.second == 1) {
        int result = get_index(v, it.first);
        cout << result + 1 << "\n";
      }
    }
  }
}