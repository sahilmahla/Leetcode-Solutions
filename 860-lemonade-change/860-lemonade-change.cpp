class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //sort(bills.begin(),bills.end());
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0;i<bills.size();i++){
            if(bills[i] == 5){
                a++;
            }
            else if(bills[i] == 10){
                b++;
                a--;
            }else{
                c++;
                if(b != 0){
                    b--;
                }else{
                    a--;
                    a--;
                }
                a--;
            }
            if(a<0 || b<0 || c<0){
                return false;
            }
        }
        return true;
    }
};