class Solution {
public:
    bool help(vector<int>& nums,int l,int h,int target){
        if(l>h){
            return false;
        }
        
        int mid = l+(h-l)/2;
        
        if(nums[mid] == target || nums[l] == target || nums[h] == target){
            return true;
        }
        bool a = false,b = false,c = false,d = false;
        if(nums[mid]<=nums[h]){
            if(target>nums[mid] && target<nums[h]){
                a =  help(nums,mid+1,h,target);
            }else{
                b = help(nums,l,mid-1,target);
            }
        }
        
        if(nums[l]<=nums[mid]){
            if(target > nums[l] && target < nums[mid]){
                c = help(nums,l,mid-1,target);
            }else{
                d = help(nums,mid+1,h,target);
            }
        }
        
        return a||b||c||d;
    }
    
    
    bool search(vector<int>& nums, int target) {
        return help(nums,0,nums.size()-1,target);
        
    }
};