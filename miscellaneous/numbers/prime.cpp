#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int n;
  cin >> n;
  bool is_prime = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cout << n << " is not a prime number\n";
      is_prime = false;
      break;
    }
  }
  if (is_prime) {
    cout << n << " is a prime number!\n";
  }
}