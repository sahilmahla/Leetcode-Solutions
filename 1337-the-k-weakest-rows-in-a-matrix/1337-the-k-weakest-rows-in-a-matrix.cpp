class Solution {
public:
    int sum(vector<int> a){
        int sum = 0;
        for(auto it:a){
            sum += it;
        }
        return sum;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        int i = 0;
        for(auto it:mat){
            v.push_back({sum(it),i++});
        }
        vector<int> res;
        sort(v.begin(),v.end());
        
        for(i = 0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};