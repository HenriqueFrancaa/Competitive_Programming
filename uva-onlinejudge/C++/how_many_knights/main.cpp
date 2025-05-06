#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    while(cin >> n >> m){
        if(n == 0 && m == 0)break;
        float resp;
        if(n == 0 || m == 0) resp = 0;
        else if(n == 1 || m == 1){
            resp = max(n,m);
        }
        else if(n == 2 && (m == 2 || m == 4)){
            resp = 4;
        }

        else if(n == 2){
            if(m%4 == 0){
                resp = m;
            }
            else if(m%2 == 0){
                resp = ceil((n*m)/2)+2;
            }
            else resp = ceil((n*m)/2)+1;
        }
        else if (m == 2){
            if (n%4 == 0){
                resp = n;
            }
            else if (n%2 == 0){
                resp = ceil((n*m) / 2) + 2;
            }
            else
                resp = ceil((n * m) / 2) + 1;
        }
        else{
            resp = float(n*m)/2;
        }

        cout << ceil(resp) << " knights may be placed on a " << n << " row " << m << " column board." << endl;
    }

    return 0;

    // UvaOnlineJudge - How Many Knights?
    // https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=637#google_vignette
}