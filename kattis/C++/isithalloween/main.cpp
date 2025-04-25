#include <iostream>
#include <string>
using namespace std;

int main(){
    string date; getline(cin,date);
    if(date == "OCT 31" || date == "DEC 25")cout << "yup" << endl;
    else cout << "nope" << endl;
    return 0;
}
