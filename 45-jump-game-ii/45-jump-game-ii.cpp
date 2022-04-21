class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int cr = 0,mr = 0;
        int j = 0;
        for(int i = 0;i<n-1;i++){
            mr = max(mr,i+nums[i]);
            if(i == cr){
                j++;
                cr = mr;
            }
        }
        return j;
    }
};