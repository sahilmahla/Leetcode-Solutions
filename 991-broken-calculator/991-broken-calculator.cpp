class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res = target-startValue;
        int c = 0;
        while( startValue < target ){
            if(target & 1){
                target++;
            }else{
                target /= 2;
            }
            c++;
        }
        
        return c + startValue-target;
    }
};