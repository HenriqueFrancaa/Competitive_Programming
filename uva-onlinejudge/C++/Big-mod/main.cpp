#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pow(ll x, ll y, ll m) { // iterativo
	ll ret = 1;
	while (y) {
		if (y & 1) ret = (ret * x) % m;
		y >>= 1;
		x = (x * x) % m;
	}
	return ret;
}

int main(){
    ll b,p,m;
    while(cin >> b >> p >> m){
        cout << pow(b,p,m) << endl;
    }
    return 0;
    // UVA374 - Big Mod - UvaOnlineJudge
    //https://onlinejudge.org/external/3/374.pdf
}