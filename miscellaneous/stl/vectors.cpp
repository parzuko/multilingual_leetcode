#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3};
    cout << v1[0] << endl;  // 1
    cout << v1.front() << endl; // 1
    cout << v1.back() << endl; // 3
    cout << v1.size() << endl; // 3 -> len of vector
    v1.push_back(4); // append
    v1.pop_back();

    // at 0 index
    v1.insert(v1.begin(), 0);

    // remove 0 index
    v1.erase(v1.begin());

    for(auto itr = v1.begin(); itr!= v1.end(); itr++){
        cout << *itr << endl;
    }
}