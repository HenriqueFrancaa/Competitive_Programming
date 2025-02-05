#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == 'p')cout << 'q';
            else if(s[i] == 'w') cout << s[i];
            if(s[i] == 'q')cout << 'p';
        }cout << endl;
    }
    return 0;
    // https://codeforces.com/contest/2044/problem/B
}