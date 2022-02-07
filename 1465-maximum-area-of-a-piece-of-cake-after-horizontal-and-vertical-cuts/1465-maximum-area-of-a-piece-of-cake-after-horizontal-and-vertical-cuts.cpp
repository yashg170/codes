class Solution {
  
public:
    long int mod=1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
         int n=horizontalCuts.size();   int s=verticalCuts.size();
       sort(horizontalCuts.begin(),horizontalCuts.end());   sort(verticalCuts.begin(),verticalCuts.end());
        for(int values:verticalCuts)
        { cout<<values<<" ";}       
        int max1=horizontalCuts[0];     int  max2=verticalCuts[0];
     for(int i=0; i<n-1; i++){
           max1=max(horizontalCuts[i+1]-horizontalCuts[i],max1);
         }
            max1=max(max1,h-horizontalCuts[n-1]);
         for(int i=0; i<s-1; i++){
           max2=max(verticalCuts[i+1]-verticalCuts[i],max2);
            
        }
         max2=max(max2,w-verticalCuts[s-1]);
        return (int)(long long)(max1%mod*max2%mod)%mod;
        
    }
};