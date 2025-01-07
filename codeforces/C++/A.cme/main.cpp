#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        if(n == 2)cout << 2 << endl;
        else if(n%2 == 0)cout << 0 << endl;
        else cout << 1 << endl;
    }

    // https://codeforces.com/contest/1241/problem/A
    return 0;
}