class Solution {
public:
    bool isvalid(string s,int i ,int j){
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0,j = s.size()-1;
        
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return isvalid(s,i+1,j) || isvalid(s,i,j-1);
            }
        }
        return true;
    }
};