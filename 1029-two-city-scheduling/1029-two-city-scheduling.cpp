class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        vector<int> diff;
        for(auto it:costs){
            sum += it[0];
            
            diff.push_back(it[1]-it[0]);
        }
        sort(diff.begin(),diff.end());
        int n = costs.size()/2;
        for(int i = 0;i<n;i++){
            sum += diff[i];
        }
        
        
        
        return sum;
    }
};