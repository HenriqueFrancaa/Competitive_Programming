#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    while(cin >> s >> t){
        int i,j; i = j = 0;
        while(i != s.size() && j != t.size()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        if(i == s.size())cout << "Yes" << endl;
        else cout << "No" << endl;
        s.clear();t.clear();
    }
    return 0;
    //https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1281
    //Uva 10340 - All in All - Uvaonlinejudge
}