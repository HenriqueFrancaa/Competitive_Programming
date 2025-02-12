#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll h,n,m; cin >> h >> n;
        while(h > 20 && n != 0){
            h = (h/2)+10;
            n--;
        }
        cin >> m;
        m*=10;
        if(h <= m)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}