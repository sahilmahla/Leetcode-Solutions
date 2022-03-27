class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if(color == newColor) return image;
        const int n = image.size(); 
        const int m = image[0].size();
        queue<vector<int>> q; 
        q.push({sr,sc});
        while(!q.empty()){
            vector<int> p = q.front();
            q.pop();
            image[p[0]][p[1]] = newColor;
            if(p[0]>0 && image[p[0]-1][p[1]]==color) q.push({p[0]-1,p[1]});
            if(p[0]<n-1 && image[p[0]+1][p[1]]==color) q.push({p[0]+1,p[1]});
            if(p[1]>0 && image[p[0]][p[1]-1]==color) q.push({p[0],p[1]-1}); 
            if(p[1]<m-1 && image[p[0]][p[1]+1]==color) q.push({p[0],p[1]+1}); 
        }
        return image;        
    }
};