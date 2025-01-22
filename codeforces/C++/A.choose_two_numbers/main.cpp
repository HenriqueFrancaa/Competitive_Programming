#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    int x,mxa = -1e9,mxb = -1e9;
    while(a--){
        cin >> x;
        mxa = max(x,mxa);
    }
    cin >> b;
    while(b--){
        cin >> x;
        mxb = max(x,mxb);
    }

    cout << mxa << " " << mxb << endl;

    return 0;

    // https://codeforces.com/problemset/problem/1206/A
    // A. Choose Two Numbers
}