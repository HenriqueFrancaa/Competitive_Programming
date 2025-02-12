#include <bits/stdc++.h>
using namespace std;
int main(){
    int size, pair = 0;
    cin >> size;
    map<int,int>mp;
    while(size--){
        int x;
        cin >> x;
        mp[x]++;
        if(mp[x] == 2){
            mp[x] = 0;
            pair++;
        }
    }
    cout << pair/2 << endl;
}