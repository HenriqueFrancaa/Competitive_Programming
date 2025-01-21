#include <bits/stdc++.h>
using namespace std;


bool validate(int n){
    while(true){
        if(n < 10 && n != 0)return true;
        if(n%10 != 0)return false;
        n = n/10;
    }
}


int main(){
    int t;cin >> t;
    while(t--){
        int a,b,r; cin >> a >> b;
        if(validate(a) && validate(b)){
            cout << a << " x " << b <<  endl;
        }
        else if(validate(a)){
            r = (b%10)-10;
            cout << r << " x " << a << " + " << b + abs(r) << " x " << a << endl;
        }else{
            r = (a%10)-10;
            cout << r << " x " << b << " + " << a+abs(r) << " x " << b << endl;
        }
    }
    return 0;

    //A. Multiplication Dilemma
    //https://codeforces.com/gym/101972/problem/A
}
