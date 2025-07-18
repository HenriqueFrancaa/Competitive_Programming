#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;     
        vector<int>sum;   
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end()){
                int aux = mp[target - nums[i]];
                sum.push_back(aux);
                sum.push_back(i);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
       return sum;
    }
};