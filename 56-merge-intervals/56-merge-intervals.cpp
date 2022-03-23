class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mi;
        vector<int> ti;
        ti = intervals[0];
        for(auto it:intervals){
            if(it[0] <= ti[1]){
                ti[1] = max(ti[1],it[1]);
            }else{
                mi.push_back(ti);
                ti = it;
            }
        }
        mi.push_back(ti);
        return mi;
    }
};