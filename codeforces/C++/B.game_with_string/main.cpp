#include <bits/stdc++.h>
using namespace std;

//o erase ajudou muito

int main(){
    string s; cin >> s;
    if(s.size()==1)cout << "NO" << endl;
    
    else{
        bool validate = false;
        int i = 0;
        while(i < s.size()-1){
            if(s[i] == s[i+1]){
                s.erase(s.begin()+i, s.begin()+i+2);
                validate = !validate;
                i = 0;
                if (s.size()==0)break;
            }
            else i++;
        }
        if(validate)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;

    // https://codeforces.com/contest/1104/problem/B
}