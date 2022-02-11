class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();   vector<int>temp; int j;
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
             for( j=i+1; j<nums.size(); j++){
                 if(nums[i]<nums[j]){
                     temp.push_back(nums[j]);
                     break;
                 }
             }
            if(j==nums.size()){ temp.push_back(-1);}
      }
        return temp;
    }
};