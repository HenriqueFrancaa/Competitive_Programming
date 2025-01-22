#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int one = 0, zero = 0;
    cin >> size;
    for(int i = 0; i < size; i++){
        char letra;
        cin >> letra;
        if(letra == 'z'){
            zero++;
        }
        if(letra == 'n'){
            one++;
        }
    }
    for(int i = 0; i < one; i++){
        cout << "1 ";
    }
    for (int i = 0; i < zero; i++){
        cout << "0 ";
    }
    cout << endl;
    return 0;
}