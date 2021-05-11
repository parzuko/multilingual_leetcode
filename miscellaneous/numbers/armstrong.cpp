#include <math.h>

#include <iostream>
using namespace std;

// 153 -> 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int temp = n;
  while (temp > 0) {
    int remainder = temp % 10;
    sum += pow(remainder, 3);
    temp = temp / 10;
  }
  if (sum == n) {
    cout << "Number is armstrong\n";
  } else {
    cout << "not an armstrong number\n";
  }
}