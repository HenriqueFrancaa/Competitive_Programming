#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        int i, j; i = 0; j = n.size()-1;

        while(i < j){
            if(n[i] == n[j]){
                i++; j--;
            }
            else return false;
        }
        return true;
    }
};