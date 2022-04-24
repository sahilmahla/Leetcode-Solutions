class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int i = 0,j=0,c=0;
        
        for(i = 0;i<g.size();){
            
            if(j==s.size()) break;
            if(s[j]>=g[i]){
                c++;
                i++;
            }
            
            j++;
            
        }
        return c;
    }
};