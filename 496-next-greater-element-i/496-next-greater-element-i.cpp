class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int n1=nums1.size(); int n2=nums2.size(); int i=0; int j=0;
        for( i=0; i<n1; i++){
            bool flag=false;
           for(j=0; j<n2; j++){
               if(nums1[i]==nums2[j]) flag=true;
                if(flag && nums1[i]<nums2[j]){
                      temp.push_back(nums2[j]);
                        cout<<nums2[j];
                    break;
                }
            }
            
           
            if(j==n2){ temp.push_back(-1);}
        }
        return temp;
        }
};         
