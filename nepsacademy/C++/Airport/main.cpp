#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, t = 1;
    while(cin >> x >> y && x != 0 && y != 0){
        set<int>aero;
        map<int,int>mp;
        for(int i = 0; i < y; i++){
            int a,b; cin >> a >> b;
            aero.insert(a); aero.insert(b);
            mp[a]++; mp[b]++;
        }
        int mx = 0, res;
        for(set<int>::iterator it = aero.begin(); it != aero.end(); it++){
            int aux = *it;
            if(mp[aux] > mx){
                res = aux;
                mx = mp[aux];
            }
        }
        cout << "Teste " << t << endl;
        for(set<int>::iterator it = aero.begin(); it != aero.end(); it++){
            
            if(mp[*it] == mx){
                cout << *it << " ";
            }
        }cout << endl;
        t++; 
    }
    return 0;
}