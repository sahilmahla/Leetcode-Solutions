class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n[nums.size()];
        for(int i = 0;i<nums.size();i++)
            n[i] = nums[i];
 //       sort(n.begin(),n.end());
        int k = 0,zc = 0;
        for(int i = 0;i<nums.size();i++){
            if(n[i]!=0){
                nums[k++] = n[i];
            }else{
                zc++;
            }
        }
        while(k<nums.size()){
            nums[k++] = 0;
        }
    }
};