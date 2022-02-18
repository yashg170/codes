class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
            int sum[n+1];  int a;
        for(int &value:sum){ value=0;}
        for(int i=1; i<=n; i++){
            sum[i]=sum[i-1]+nums[i-1];
            
        }
        sum[0]=0; 
        int i=0,j=0;int max1=100000;
        while(j<n){
           a=sum[j+1]-sum[i];
            if(a<target){
            
                j++;
            }
            else if(a>target){ max1=min(max1,j+1-i); i++;}
            else{ max1=min(max1,j+1-i);
                     i=j;
                     j++;
        }
        cout<<a<<" ";
    }
   if(max1==100000)return 0;
                  return max1;
    }
};