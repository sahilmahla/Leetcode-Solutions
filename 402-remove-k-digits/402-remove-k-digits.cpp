class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k >= num.size())
            return "0";
        string res = "";
        
        for(auto it:num){
      
            while (k > 0 && res.size() > 0 && it < res[res.size() - 1]) {
                k--;
                res.pop_back();
            }
            res += it;
        }
        while(k > 0){
            res.pop_back();
            k--;
        }
        
        res.erase(0,min(res.find_first_not_of('0'),res.size()-1));
        
        return res;
    }
};