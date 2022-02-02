class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;    int n=nums.size(); int end=n-1; 
        if(start==end){ return nums[start];}
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(start!=end){
             int mid=(start+end)/2;
             if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
        return nums[mid];
             }
            else{
        if(nums[mid]==nums[mid+1]){ if(mid%2==0){ start=mid+1; } 
                                  else { end=mid-1;}
        }
        if (nums[mid]==nums[mid-1]){
                                  if(mid%2==0){ end=mid-1;}
                                  else{ start=mid+1;}
        }
          

    }
        }
        return nums[start];
        
    }
};
        
    