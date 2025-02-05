#include <bits/stdc++.h>
using namespace std;

//Ceil só para float/double

int main(){
    int t; cin >> t;
    while(t--){
        float a,b,n; cin >> n;
        vector<pair<float,float>>v;

        b = ceil(n/2);
        a = n - b;

        while(a != 0){
            v.push_back(make_pair(a,b));
            a--,b++;
        }

        int cont = 0;

        for(int i = 0; i != v.size(); i++){
            if(v[i].first != v[i].second){
                cont += 2;
            }
            else cont++;
        }

        cout << cont << endl;
    }
    return 0;

    // https://codeforces.com/contest/2044/problem/A
}