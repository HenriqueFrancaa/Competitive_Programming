#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string test; cin >> test;
        int score = 0; int cont = 0;
        for(int i = 0; i < test.size(); i++){
            if(test[i] == 'X'){
                cont = 0;
            }
            else{
                cont++;
                score += cont;
            }
        }
        cout << score << endl;
    }
    // 1585 - Score - UvaOnlineJudge
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4460
    return 0;
}