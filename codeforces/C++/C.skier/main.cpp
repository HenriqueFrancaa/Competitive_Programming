#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string c; cin >> c;
        map<pair<int,int>,vector<pair<int,int>>>mp;
        pair<int,int> pass,now;
        pass = now = {0,0}; 
        int ans = 0;
        for(int i = 0; i < c.size(); i++){
            if(c[i] == 'N'){
                now.second = pass.second + 1;
            }
            else if(c[i] == 'S'){
                now.second = pass.second-1;
            }
            else if(c[i] == 'W'){
                now.first = pass.first-1;
            }
            else if(c[i] == 'E'){
                now.first = pass.first+1;
            }

            if(mp.find(now) == mp.end()){
                ans+=5;
                mp[pass].push_back(now);
                mp[now].push_back(pass);
            }

            else{
                bool validate = true;
                int j = 0;
                while(validate && j != mp[now].size()){
                    if(mp[now][j] == pass)validate = false;
                    j++;
                }
                if(!validate)ans+=1;
                else{
                    ans+=5;
                    mp[now].push_back(pass);
                    mp[pass].push_back(now);
                }
            }
            pass = now;
        }
        cout << ans << endl;
    }
    return 0;
    // https://codeforces.com/contest/1351/problem/C
    // C. Skier
}