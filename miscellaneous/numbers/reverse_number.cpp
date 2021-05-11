#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int reversed_number = 0;
    int temp = n;
    int answer = 0;
    while (temp!=0){
        int remainder = temp%10;
        answer = answer*10 + remainder;
        temp = temp/10;
    }
    cout << answer << " is the number reversed!\n";
}