class Solution {
public:
    bool isValid(int key,vector<int>& position,int m){
        int prev = 0;
        m--;
        for(int i = 1;i<position.size();i++){
            if(position[i]-position[prev] >= key){
                m--;
                prev = i;
            }
        }
        return m<=0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans = -1;
        int l = 0,r = position[position.size()-1] - position[0];
        while(l<=r){
            int mid = (l+r)/2;
            if(isValid(mid,position,m)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return ans;
    }
};