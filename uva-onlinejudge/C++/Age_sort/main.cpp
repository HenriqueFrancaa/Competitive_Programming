#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        vector<int>v;
        for(int i = 0; i < n; i++){
            int x;cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            cout << v[i] << " ";
        }cout << v[n-1] << endl;
    }
    return 0;
    //11462 - AgeSort - UvaOnlineJudge
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457
}