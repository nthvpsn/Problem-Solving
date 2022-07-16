class Solution {
public:
    int fib(int n) {
        int seclast = 0;
        int last = 1;
        int cur;
        for(int i=2;i<=n;i++){
            cur = last + seclast;
            seclast = last;
            last = cur;
        }
        if(n==0) return seclast;
        if(n==1) return last;

        return cur;
    }
};