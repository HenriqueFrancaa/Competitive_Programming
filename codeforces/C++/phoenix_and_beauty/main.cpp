#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n,k; cin >> n >> k;
        set<int>nd;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            nd.insert(x); 
        }
        if(nd.size() > k)cout << -1 << endl;
        else{
            int sz = n * k;

            cout << sz << endl;
            for(int i = 0; i < n; i++){

                for(auto j : nd){
                    cout << j << " ";
                }
                
                for(int i = 0; i < (k - nd.size()); i++){
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}