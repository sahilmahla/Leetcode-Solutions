class Solution {
public:
    int pov(int x){
        int s = 0;
        while(x != 1){
            if(x&1){
                x = x*3+1;
            }else{
                x = x/2;
            }
            s++;
        }
        return s;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i = lo;i<=hi;i++){
            v.push_back({pov(i),i});
        }
        
        sort(v.begin(),v.end());
        
        return v[k-1].second;
        
        
    }
};