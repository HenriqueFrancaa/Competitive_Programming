#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int>grade;
    while(t--){
        double n; cin >> n;
        double media = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            grade.push_back(x);
            media += x;
        }
        media /= n;
        double cont = 0;
        for(int i = 0; i < n; i++){
            if(grade[i] > media){
                cont++;
            }
        }
        double res = (cont/n) * 100;
        cout << setprecision(3) << fixed << res << "%" << endl;
        grade.clear();
    }
    return 0;
    //10370 - Above Average - UvaOnlineJudge
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1311
}