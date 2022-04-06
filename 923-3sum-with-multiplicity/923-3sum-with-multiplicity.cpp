class Solution {
private:
    int mod = 1e9 + 7;
    
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        int n = arr.size(), res = 0;
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n; i++)
        {
            // check if we already found this sum
            // add it to result
            res += mp[target - arr[i]];
            res %= mod;
            
            for(int j = 0; j < i; j++)
            {
                // calcualte the freq for every pairs of sum
                mp[arr[i] + arr[j]]++;
            }
        }
        

        return res;
    }
};