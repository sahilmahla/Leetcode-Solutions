class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3) return 0;
        int c = 0;
        for(int i = n-1;i>=2;i--){
            
            int j = 0;
            int k = i-1;
            while(j<k){
                if(nums[j]+nums[k]>nums[i]){
                    c += k-j;
                    k--;
                }else{
                    j++;
                }
            }
        }
        return c;
    }
};