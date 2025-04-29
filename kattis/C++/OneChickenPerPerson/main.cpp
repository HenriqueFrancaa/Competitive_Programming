#include <iostream>
using namespace std;

int main(){
    int n,m; cin >> n >> m;

    if(m > n){
        cout << "Dr. Chaz will have " << m-n << " pieces of chicken left over!" << endl;
    }

    else{
        cout << "Dr. Chaz needs " << abs(n-m) << " more pieces of chicken!" << endl;
    }

    return 0;
}
