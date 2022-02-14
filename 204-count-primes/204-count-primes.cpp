class Solution {
public:
    int countPrimes(int n) {
        bool dp[n+1]; for(bool &value:dp) value=true; 
            int count=0;
        dp[0]=false;
        if(n>0){
        dp[1]=false;
        for(int i=2; i*i<n; i++){
            if(dp[i]==true){
                for(int j=i*i; j<n; j=j+i)
                    dp[j]=false;
                
            }
        }
        }     
        for(int i=0; i<n; i++){
            if(dp[i]==true) count++;
        }
      return count;  
    }
};