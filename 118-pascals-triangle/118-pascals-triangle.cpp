class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        
        for(int i = 0 ; i < numRows ; i++ ){
            v[i].resize(i+1);            // resizing size of each row  size of each row will be i+1
            v[i][0] = v[i][i] = 1;      //setting  first and last element as 1
            
            // setting the middle elements    
            for(int j = 1; j < i;j++ ){
                v[i][j] = v[i-1][j-1]+v[i-1][j]; 
            }
        }
        return v;
    }
};