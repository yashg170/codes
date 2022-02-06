class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size(); int cost=0; int sell=0; int number=0;
      for(int i=0; i<n;){
           if(number==0){
               if(i==n-1){
                   
               }
             else  if(nums[i]>=nums[i+1]){

                }
               else{ number++;
                   
                      cost+=nums[i]; }
               i++;
          }
          else{
                if(i==n-1){
                   number--;
                    sell+=nums[i];
                }
               else  if(nums[i]>nums[i+1]){
                    number--;
                   
                    sell+=nums[i];
                }
          
              i++;
          }
      }
        cout<<sell<<" "<<cost;
        return sell-cost;
    }
};