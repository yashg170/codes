class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      map<int,int>m; int n=nums.size();  int sum=0;
        int count=0;
      for(int i=0; i<n; i++){
        sum=sum+nums[i];
       if(sum==k){
               count++; 
          }
        if(m.find(sum-k)!=m.end()){
                   count+=m[sum-k];
       }
       m[sum]++;
     }
        return count;
    }
};