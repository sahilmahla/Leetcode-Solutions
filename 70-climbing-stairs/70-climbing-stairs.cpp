class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int output[n];
        output[0] = 1;
        output[1] = 2;
        for(int i = 2;i<n;i++){
            output[i] = output[i-1]+output[i-2];
        }
        
        return output[n-1];
    }
};