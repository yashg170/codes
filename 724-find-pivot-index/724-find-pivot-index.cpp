class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(); int MIN=n+1;
        int sum[n];
        sum[0]=nums[0];
        for(int i=0; i<n; i++){
            if(i>0)
                sum[i]=sum[i-1]+nums[i];
        }
        for(int i=0; i<n; i++){
            if(i==0 ){
                if( sum[n-1]-sum[i]==0)
                MIN=0;
                else  continue;
            }
           else if(sum[i-1]==sum[n-1]-sum[i]) MIN=min(MIN,i);
         }
        return MIN<n+1?MIN:-1;
    }
};