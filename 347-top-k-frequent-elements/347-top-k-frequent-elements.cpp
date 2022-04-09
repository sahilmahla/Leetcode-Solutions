class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        return a.second<b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        
        for(auto it:nums){
            
           mp[it]++;
            
        }
        vector<pair<int,int>> a;
        for(auto it:mp){
            a.push_back(it);
        }
        sort(a.begin(),a.end(),cmp);
        vector<int> v;
        int n = a.size();
        for(int i =n-1;i>=n-k;i--){
            v.push_back(a[i].first);
        }
        return v;
    }
};