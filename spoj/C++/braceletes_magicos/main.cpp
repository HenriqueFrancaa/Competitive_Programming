#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    string p,s;
    while(t--){
        cin >> p >> s;
        s+=s;
        int j = 0;bool validate = false;    
        for(int i = 0; i < s.size(); i++){
            if(s[i] == p[j]){
                j++;
                if(j == p.size()){
                    validate = true;
                    break;
                }
            }
            else{
                j = 0;
            }
        }

        for (int i = s.size()-1; i >= 0; i--){
            if (s[i] == p[j]){
                j++;
                if (j == p.size()){
                    validate = true;
                    break;
                }
            }
            else{
                j = 0;
            }
        }

        if(validate)cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
    // https://br.spoj.com/problems/BRACELMG/
    //Braceletes mágicos
}