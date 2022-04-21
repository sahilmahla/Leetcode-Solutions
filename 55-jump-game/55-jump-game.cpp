class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cr = 0,mr = 0;
        
        for(int i = 0;i<nums.size()-1;i++){
            mr = max(mr,i+nums[i]);
            
            if(i == cr){
                cr = mr;
                if(mr == i){
                    return false;
                }
            }
        }
        return true;
    }
};