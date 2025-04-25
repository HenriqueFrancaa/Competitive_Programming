#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n1,n2;
    while(cin >> n1 >> n2){
        cout << (max(n1,n2) - min(n1,n2)) << endl;
    }
    return 0;
    // KATTIS - different
    // https://open.kattis.com/problems/different
}