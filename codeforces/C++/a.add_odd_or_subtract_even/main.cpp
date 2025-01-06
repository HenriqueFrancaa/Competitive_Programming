#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;int a,b,cont; cin >> t;
    while(t--){
        cont = 0;
        cin >> a >> b;
        if(a == b)cout << 0 << endl;
        else{
            if(a < b && ((a%2 != 0 && b%2 != 0) || (a%2 == 0 && b%2 == 0))){
                cout << 2 << endl;
            }
            else if(a > b && ((a%2 != 0 && b%2 == 0) || (a%2 == 0 && b%2 != 0))){
                cout << 2 << endl;
            }
            else cout << 1 << endl;

        }
    }

    // se eu tenho A = 3 e B = 7, x = 7 - 3 = 4 e 4 é par, então tenho que fazer a = a+(4-1) = 6
    // e entao x = 7 - 6 = 1 e 1 é impar, e agora somo a = a + 1 = 7 = b e total de mov = 2
    // se eu tenho A = 2 e B = 6, x = 6 - 2 = 4 e 4 é par, mas eu tenho que fazer o A aumentar, então faço a = a+(4-1)
    // a = 5, x = 6-5 = 1 e 1 é impar, então 1+5 = 6 = b: total de mov = 2
    // se eu tenho A = 6 e B = 2, x = 6-2 = 4 e 4 é par, então faço a = a - 4 = 2 = b e total de mov = 1 

    //se eu subtrair (impar - impar) ou (par - par) = par
    //se eu subtrair (par - impar) ou (impar - par) = impar
    //talvez isso possa ajudar

    // https://codeforces.com/contest/1311/problem/A
    return 0;
}