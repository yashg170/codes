class Solution {
public:
    int fib(int n) {
        int x=0;
       if(n==0)return 0;
        if(n==1)return 1; 
       else{
            x=fib(n-1)+fib(n-2);
       } 
        return x;
    }
};