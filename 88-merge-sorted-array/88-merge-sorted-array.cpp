class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     //   m--;
        for(auto it: nums2){
            nums1[m++] = it;
        }
        sort(nums1.begin(),nums1.end());
    }
};