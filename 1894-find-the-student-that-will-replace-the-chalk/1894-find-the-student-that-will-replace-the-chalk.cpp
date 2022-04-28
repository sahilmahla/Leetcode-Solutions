class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int s = 0;
        for(auto it:chalk){
            s += it;
        }
        
        int x = k%s;
        // cout<<x;
        // cout<<chalk.size();
        if(x==0) return 0;
        for(int i = 0;i<chalk.size();i++){
            if(x==0) return i;
            x -= chalk[i];    
            if(x<0) return i;
        }
        return -1;
    }
};