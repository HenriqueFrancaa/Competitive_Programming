#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double save(double l, double d, double v1, double v2){
    double t = (d - l) / (v1+v2);
    return t;
}

int main(){
    double d, l, v1,v2; cin >> d >> l >> v1 >> v2;

    
    cout << setprecision(20) << save(d,l,v1,v2) << endl;

    return 0;
}