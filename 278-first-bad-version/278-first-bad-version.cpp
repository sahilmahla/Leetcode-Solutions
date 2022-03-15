// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0,r = n;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            
            if(!isBadVersion(mid-1) && isBadVersion(mid)){
                return mid;
            }
            else if(isBadVersion(mid)){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
};