class Solution {
public:
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
     int n=hor.size(); int mod=1e9+7; 
        int m=ver.size(); 
        sort(hor.begin(),hor.end()); sort(ver.begin(),ver.end());
        int height=max(hor[0],h-hor[n-1]); int width=max(ver[0],w-ver[m-1]); 
       for(int i=1; i<n;i++){
           height=max(height,hor[i]-hor[i-1]); 
       }
        for(int j=1; j<m; j++){
            width=max(width,ver[j]-ver[j-1]); 
        }
        long ans=1L*height*width; 
        return ans%mod; 
    }
};