#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){
    if(n == 2)return true;
    for(int i = 3; i <= sqrt(n); i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

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
    ll n;
    while (scanf("%lld", &n)){
        if(n == 0)break;
        int validate = true;
        bool prime = isPrime(n);
        if(prime){
            cout << n << " is normal." << endl;
            continue;
        }  
        for(int i = 2; i <= n-1; i++){
            if(pow(i,n,n) != i){
                validate = false;
                break;
            }
        }
        if(validate && !prime){
            cout << "The number " << n << " is a Carmichael number." << endl;
        }else{
            cout << n << " is normal." << endl;

        }
    }
    
    return 0;
}