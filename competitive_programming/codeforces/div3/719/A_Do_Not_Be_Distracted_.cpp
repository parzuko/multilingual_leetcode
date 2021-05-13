#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string task;
        cin >> task;
        if (n==1){
            cout << "YES\n";
            continue;
        }
        char latest = task[0];
        set<char> seen;
        seen.insert(latest);
        bool sus=false;
        for(int i=1;i<n;i++){
            char current = task[i];
            if (current == latest) {
                continue;
            }
            // if current is different from the previous one
            if (seen.find(current) == seen.end()){
               // coudlnt find  
               latest = current;
               seen.insert(current);
               continue;
            }
            // current is diff from latest and it is present in set
            sus = true;
        }
        if (sus) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }

    }
}