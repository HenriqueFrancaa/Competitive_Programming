#include <iostream>
using namespace std;

int main(){

    int n,m,x; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            if(x%2 != 0 && i%2 == 0 && j%2 == 0)x++;
            if(x%2 != 0 && i%2 != 0 && j%2 != 0)x++;
            if(x%2 == 0 && i%2 == 0 && j%2 != 0)x++;
            if(x%2 == 0 && i%2 != 0 && j%2 == 0)x++;
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
    // E.Reverse Engineering - CodeForces
    // https://codeforces.com/group/9CNwiex6Ir/contest/606592/problem/E

}