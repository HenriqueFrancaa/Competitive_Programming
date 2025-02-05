#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,a,b,c; cin >> n >> a >> b >> c;
        vector<int>v(2,n);
        int ans = n*2;
        v[0] -= min(a,n);
        v[1] -= min(b,n);
        int aux = v[0]+v[1];
        if(aux >= c){
            aux = aux - c;
            cout << ans - aux << endl;  
        }else cout << ans << endl;
        
        
    }
    return 0;
    // https://codeforces.com/contest/2044/problem/C
}