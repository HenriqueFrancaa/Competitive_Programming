#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int count = 0;
    while(t--){
        string op; int d;
        cin >> op;
        if(op == "donate"){
            cin >> d;
            count += d;
        }
        else{
            cout << count << endl;
        }
    }
    return 0;
    //Uva 12403 - Save Shetu - uvaonlinejudge
    //https://onlinejudge.org/external/124/12403.pdf
}