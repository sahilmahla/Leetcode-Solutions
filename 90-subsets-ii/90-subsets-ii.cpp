class Solution {
public:
    void solve(vector<int>& nums,int n,vector<int> op,set<vector<int>>& ans){
        if(n>=nums.size()){
            sort(op.begin(),op.end());
            ans.insert(op);
            return;
        }
        solve(nums,n+1,op,ans);        
        op.push_back(nums[n]);
        solve(nums,n+1,op,ans);
        op.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<int> a;
        solve(nums,0,a,ans);
        
        vector<vector<int>> res(ans.begin(),ans.end());
        
        
        return res;
    }
};