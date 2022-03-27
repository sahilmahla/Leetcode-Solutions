class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int ans = 0;
        
        for(auto it:nums){
            if(it == 1){
                c++;
            }else{
                c = 0;
            }
            ans = max(c,ans);
        }
        return ans;
    }
};