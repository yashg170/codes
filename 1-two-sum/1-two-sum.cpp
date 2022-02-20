class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(); 
        unordered_map<int,int>m;
         vector<int>temp;
    for(int i=0; i<n; i++){
         if(m.find(target-nums[i])!=m.end()) { 
             temp.push_back(i); temp.push_back(m[target-nums[i]]);
         break;}
        else{  m[nums[i]]=i;}
         }
        return temp;
    }
};