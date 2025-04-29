#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s,t; cin >> s >> t;
        vector<vector<int>>v(26);
        for(int i = 0; i < s.size(); i++){
            v[s[i] - 'a'].push_back(i);
        }
        int index = 0;
        int op = 1;
        for(int j = 0; j < t.size(); j++){
            int aux = t[j] - 'a';
            if(v[aux].empty()){
                op = -1;
                break;
            }
            if(index > v[aux][v[aux].size()-1]){
                op++;
                index = 0;
            }

            int pos = upper_bound(v[aux].begin(), v[aux].end(), index) - v[aux].begin();

            if((pos < v[aux].size() && pos != 0 && v[aux][pos-1] == index) || pos == v[aux].size()){
                pos -= 1;
            }
            index = v[aux][pos]+1;

        }
        cout << op << endl;
        // CodeForces - C. Obtain the string
        // https://codeforces.com/contest/1295/problem/C
    }
    return 0;
}