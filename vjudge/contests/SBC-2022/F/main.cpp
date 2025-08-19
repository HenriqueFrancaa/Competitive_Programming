#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    ll d,c,r; cin >> d >> c >> r;
    ll resp = r;
    vector<int>C(c);
    for(int i = 0; i < c; i++){
        cin >> C[i];
    }
    
    for(int i = 0; i < r; i++){
        ll x; cin >> x;
        d+=x;
    }

    for(int i = 0 ; i < c; i++){
        if(C[i] > d){
            break;
        }
        resp++;
        d -= C[i];
    }

    cout << resp << endl;

    return 0;
}