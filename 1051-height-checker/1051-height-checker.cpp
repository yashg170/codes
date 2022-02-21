class Solution {
public:
    int heightChecker(vector<int>& nums) {
       int n=nums.size();
        int max1=0; int i; int count=0;
      for(i=0;i<n;++i){ max1=max(max1,nums[i]); }
      int temp[max1+1];
        for(int &value:temp){ value=0;}
       for(i=0; i<n; ++i){ temp[nums[i]]++;}
       for(i=1;i<max1+1;++i){ temp[i]=temp[i]+temp[i-1];}
      int r[n];
      for(i=0; i<n; ++i){ r[temp[nums[i]]-1]=nums[i];
               temp[nums[i]]--;}
      for(i=0; i<n; ++i){ if(nums[i]!=r[i])count++;}
        return count;
    }
};