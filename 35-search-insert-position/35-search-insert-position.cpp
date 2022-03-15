class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        if(target>nums[r-1]){
            return r;
        }
        if(target<=nums[0]){
            return 0;
        }
     //   r++;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=target && nums[mid-1]<target)
                return mid;
            else if(nums[mid]>target)
                r = mid;
            else
                l = mid;
        }
        return -1;
    }
};