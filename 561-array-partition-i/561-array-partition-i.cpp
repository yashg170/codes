class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
          int n=nums.size();  int value;
        map<int,int>freq;     int frequency; 
          
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        int i=0;
        for(auto it:freq){
            value=it.first;
            frequency=it.second;
            for(int j=0; j<frequency; ++j){
                 nums[i++]=value;
                
            }
           
        }
         i=0;
     int min1=min(nums[i],nums[i+1]);
        for(int i=2; i<n-1; i+=2){
            min1+=min(nums[i],nums[i+1]);
        }
        return min1;
    }
};