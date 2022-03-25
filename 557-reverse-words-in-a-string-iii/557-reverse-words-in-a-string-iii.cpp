class Solution {
public:
    void reverse(string &s,int l,int h){
        while(l<=h){
            swap(s[l],s[h]);
            l++;
            h--;
        }
    }
    string reverseWords(string s) {
        int start=0;
        for(int end=0;end<s.length();end++){
            if(s[end]==' '){
                reverse(s,start,end-1);
                start=end+1;
            }
        }
        reverse(s,start,s.length()-1);
        
        
        return s;
    }
    
};