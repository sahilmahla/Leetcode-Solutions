class Solution {
public:
    
    long long solve(string s,char c){
        int n = s.size();
        vector<int> pre(n),suf(n);
        long long  count = 0;
        for(int i = 0;i<n;i++){
            pre[i] = count;
            if(s[i] == c) count++;
        }
        
        count = 0;
        for(int i = n-1;i>=0;i--){
            suf[i] = count;
            if(s[i] == c) count++;
        }
        
        
        char x = (c== '1') ? '0' : '1';
        long long ans = 0;
        for(int i = 1;i<n-1;i++){
            if(s[i] == x)
                ans += pre[i] * suf[i];
        }
        
        
        return ans;
        
        
        
    }
    
    long long numberOfWays(string s) {
        long long a = solve(s,'1');
        
        long long b = solve(s,'0');
        return a+b;
    }
};