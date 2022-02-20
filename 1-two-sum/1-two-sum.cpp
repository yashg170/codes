class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(); 
         vector<int>temp;
    for(int i=0; i<n; i++){
         for(int j=i+1; j<n; j++){
             if(nums[j]+nums[i]==target){ temp.push_back(i); temp.push_back(j);
                                           break;}
         }
        if(!temp.empty()){ break;}
    }
        return temp;
    }
};