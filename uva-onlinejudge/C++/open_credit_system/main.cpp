#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x;
        int best; cin >> best;
        int mx = -1;
        for(int i = 0; i < n-1 ; i++){
            cin >> x;
            if((best - x) > mx){
                mx = best-x;
            }
            best = max(best, x);
        }

        cout << mx << endl;
    }
    return 0;
}
