class Solution {
public:
    int tribonacci(int n) {
      int fib[n+1];
       
        for(int i=0; i<n+1; i++){
            if(i==0)fib[0]=0;
               else  if(i==1)fib[1]=1;
            else if(i==2)fib[2]=1;
            else
            fib[i]=fib[i-1]+fib[i-2]+fib[i-3];
        }
        return fib[n];
    }
};