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
    int n, k;
    cin >> n >> k;
    // getting vector
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v.push_back(x);
    }
    // finding  max val

    int max_val = *max_element(v.begin(), v.end());
    int max_index = get_index(v, max_val);

    // adding k to max

    v[max_index] += k;

    // performing subtraction operation

    int current_index = 0;
    while (k--) {        
      if (v[current_index] > 0) {
        v[current_index]--;
      } else {
        current_index++;
      }
    }

    // printing vector
    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
  }
}