class Solution {
public:
    int M=1000000;
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n+1];
        for(int &value:dp){ value=M;}
        dp[0]=0; 
        for(int i=0; i<n; i++){
            for(int j=i+1; j<=i+2 && j<n+1;j++){
                if(i==1){
                    dp[j]=min(dp[j],cost[i]);
                }
                else{
                    dp[j]=min(dp[j],dp[i]+cost[i]);
                }
            }
        }
        return dp[n];
    }
};