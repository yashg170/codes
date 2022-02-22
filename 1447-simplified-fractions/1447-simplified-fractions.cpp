class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>a;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<i; ++j){
                if(gcd(i,j)==1)
                a.push_back(to_string(j) + "/" + to_string(i));
            }
        }
        return a;
    }
};