class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int output[n];
        output[0] = 1;
        int ans  = 1;
        for(int i = 1;i<n;i++){
            output[i] = 1;
            
            for(int j = i-1;j>=0;j--){
                if(nums[j]>=nums[i]){
                    continue;
                }
                int pa = output[j] + 1;
                output[i] = max(output[i],pa);
            }
            ans = max(ans,output[i]);
        }
        
        return ans;
        
    }
};