#include <bits/stdc++.h>
using namespace std;


// Só satisfazer a regra de B = W+1

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        bool white = true;
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                if(white){
                    cout << "W";
                    white = false;
                }
                else cout << "B"; 
            }
            cout << endl;
        }

    }
    return 0;
    // https://codeforces.com/contest/1333/problem/A
}