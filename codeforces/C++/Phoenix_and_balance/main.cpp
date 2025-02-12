#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll>memo(31,0);

void pot(){
    for(int i = 2; i < 31; i++){
        memo[i] = memo[i-1] * 2;
    }
}

int main(){
    memo[1] = 2;
    int t; cin >> t;
    pot();
    while(t--){
        int n,i,j; cin >> n;
        ll sum1=0,sum2=0;
        sum1 += memo[n]; sum2 += memo[n-1];
        j = 1; i = n-2;
        while(i > j){
            sum1 += memo[j];
            sum2 += memo[i];
            j++; i--; 
        }
        cout << abs(sum1 - sum2) << endl;

    }
    return 0;
}