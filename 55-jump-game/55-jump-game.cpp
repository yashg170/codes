class Solution {
public:
    bool canJump(vector<int>& nums) {
      int post=nums.size()-1;
       for(int i=post-1; i>=0; i--){
              if(i+nums[i]>=post){
                  post=i;
              }
       }
        if(post==0)
            return 1;
            return 0;
    }
};