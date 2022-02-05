class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n]; 
        for(int &values:dp){
            values=1000000;
        }
        
         dp[0]=0;
        for(int i=0; i<n; i++){
            int k=nums[i];
            for(int j=i+1; j<=i+k && j<n ;j++){
                 dp[j]=min(dp[j],dp[i]+1);
            }
        }
        return dp[n-1];
    }
};