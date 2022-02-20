class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      map<int,int>m; int n=nums.size();  int sum[n]; sum[0]=nums[0];
        int count=0;
      for(int i=0; i<n; i++){
       if(i>0) {
            sum[i]=sum[i-1]+nums[i];
          }          
          if(sum[i]==k){
               count++; 
          }
        if(m.find(sum[i]-k)!=m.end()){
                   count+=m[sum[i]-k];
       }
       m[sum[i]]++;
          
      }
        return count;
    }
};