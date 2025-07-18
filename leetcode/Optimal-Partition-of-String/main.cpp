#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        vector<int>letters (26,0);
        int cont = 1;
        for(int i = 0; i < s.size(); i++){
            if(letters[s[i] - 'a'] != 0){
                cont++;
                letters.assign(letters.size(), 0);
            }
            letters[s[i]-'a'] = 1;
        }
        return cont;
    }
};

// Leetcode - 2405. Optimal Partition of String
//https://leetcode.com/problems/optimal-partition-of-string/description/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency