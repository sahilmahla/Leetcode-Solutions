class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>res(nums.begin(),nums.end());
        int n = nums.size();
        for(auto x:nums)
        {
            res.push_back(x);
        }
        k = k%n;
        for(int i=0;i<n;i++)
        {
           nums[i] = res[i+n-k];
        }
    }
};