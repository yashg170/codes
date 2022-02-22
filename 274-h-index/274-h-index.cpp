class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(); int count=1; int a=0;
         sort(citations.begin(),citations.end());
        int i=n-1;
        while( i>=0 ){
            if(count<=citations[i] ){
              a=count;
            count++;
                i--;
            }
           else{break;}
     }
        return a;
    }
};