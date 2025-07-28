#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        if(a == "" || b == ""){
            cout << "" << endl;
        }
        else{
            vector<int>A(26,0);
            vector<int>B(26,0);
            for(int i = 0; i < a.size(); i++){
                A[a[i]-'a']++;
            }
            for(int i = 0; i < b.size(); i++){
                B[b[i] - 'a']++;
            }

            for(int i = 0; i < 26; i++){
                while(A[i] != 0 && B[i] != 0){
                    A[i]--; B[i]--;
                    char letra = 97 + i;
                    cout << letra;
                }
            }cout << endl;
        }
    }
    // 10252 - Common Permutation - UvaOnlineJudge
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=9
    return 0;
}