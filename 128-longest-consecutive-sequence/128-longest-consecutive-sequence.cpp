#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        
        for(int it: nums){
            hashSet.insert(it);
        }
        int currStreak = 1;
        int ans = 0;
        int prev = INT_MIN;
        for(auto it:hashSet){
     //       cout<<it<<" ";
            if(it == prev+1){
                currStreak++;
                
            }else{
                
                currStreak = 1;
            }
            prev = it;
            ans = max(ans,currStreak);
        }
        return ans;
    }
};