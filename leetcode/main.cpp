class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        vector<int>merge = nums1;
        merge.insert(merge.end(),nums2.begin(), nums2.end());
        sort(merge.begin(), merge.end());

        if(merge.size()%2 == 0){
            return double(merge[merge.size()/2] + merge[merge.size()/2 - 1])/2;
        }
        else return merge[merge.size()/2];
    }
};
