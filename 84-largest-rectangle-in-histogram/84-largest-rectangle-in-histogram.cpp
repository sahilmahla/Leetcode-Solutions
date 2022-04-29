class Solution {
public:
    vector<int> prevSmaller(vector<int> a){
        vector<int> v(a.size());
        stack<int> s;
        for(int i = 0;i<a.size();i++){
            
            while(!s.empty() && a[s.top()] >= a[i]){
                s.pop();
            }
            v[i] = s.empty() ? -1:s.top();
            s.push(i);
        }
        return v;
    }
    vector<int> nextSmaller(vector<int> a){
        vector<int> v(a.size());
        stack<int> s;
        for(int i = a.size()-1;i>=0;i--){
            
            while(!s.empty() && a[s.top()] >= a[i]){
                s.pop();
            }
            v[i] = s.empty() ? a.size():s.top();
            s.push(i);
        }
        return v;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> ps = prevSmaller(heights);
        vector<int> ns = nextSmaller(heights);
        
        int ans = 0;
        for(int i = 0;i<heights.size();i++){
            int curAns = (ns[i]-ps[i]-1)*heights[i];
            ans = max(ans,curAns);
        }
        return ans;
    }
};