class Solution {
public:
    int x(vector<int>& nums){
        int sum=0;
    for(int i=0; i<nums.size(); i++){
          sum=sum^nums[i];
       } 
        return sum;
    }
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int b=(1<<maximumBit)-1; vector<int>temp(nums.size());  int a=x(nums);
               for(int i=0; i<nums.size(); i++){
                    temp[i]=(a^b);
                   a=a^nums[nums.size()-i-1];
                   
               }
        return temp;
    }
};