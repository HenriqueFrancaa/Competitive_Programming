class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(128,0);
        int current_sz = 0;
        int mx_sz = 0;
        
        for(int i = 0; i < s.size(); i++){
            current_sz = 0;
            for(int j = i; j < s.size(); j++){
                if(v[s[j] - 0] == 0){
                    current_sz++;
                    v[s[j]- 0] = 1;
                }
                else{
                    v.assign(v.size(), 0);
                    break;
                }
            }
            mx_sz = max(mx_sz, current_sz);
        }

        return mx_sz;
    }
};
