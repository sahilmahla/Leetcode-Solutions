class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int pd = nums[1]-nums[0];
        
        int count = pd == 0?1:2;
        int cd =0;
        for(int i = 2;i<nums.size();i++){
            cd = nums[i]-nums[i-1];
            
            if((cd>0 && pd <=0) || (cd<0 && pd>=0)){
                count++;
                pd = cd;
            }
            
        }
        return count;
    }
};