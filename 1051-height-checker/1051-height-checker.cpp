class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> st{heights.begin(),heights.end()};
        sort(st.begin(),st.end());
        int i = 0;
        int c = 0;
        for(auto it: st){
         //   cout<< it<<" "<<heights[i]<<"\n";
            if(it != heights[i++]) c++;
        }
        return c;
    }
};