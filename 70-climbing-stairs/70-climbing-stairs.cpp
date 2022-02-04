class Solution {
public:
    int climbStairs(int n) {
        int staircase[n+1];
        for(int i=0; i<n+1; i++){
            if(i==0)staircase[0]=1;
            else if(i==1)staircase[1]=1;
            else
                staircase[i]=staircase[i-1]+staircase[i-2];
        }
        return staircase[n];
    }
};