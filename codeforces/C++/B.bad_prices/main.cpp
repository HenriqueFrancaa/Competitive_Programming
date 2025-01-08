#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int ans = 0;
        int Minprice = v[n-1];
        for(int i = n-2; i >= 0; i--){
            if(v[i] > Minprice){
                ans++;
            }
            Minprice = min(v[i],Minprice);
        }
        cout << ans << endl;

    }

    // https://codeforces.com/contest/1213/problem/B
    return 0;
}