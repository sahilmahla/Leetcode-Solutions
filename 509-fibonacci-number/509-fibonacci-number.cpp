class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        int b = 0, a = 1;
        for(int i=2; i<=n; i++){
            int c = a + b;
            b = a;
            a = c;
        }
        
        return a;  
    }
};