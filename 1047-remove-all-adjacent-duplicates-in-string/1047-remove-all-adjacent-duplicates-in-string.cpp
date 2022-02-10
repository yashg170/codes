class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1; string res; stack<char>s2;
    int n=s.length();
        for(int i=0; i<n; i++ ){
            if(!s1.empty()){
                if(s[i]==s1.top()){ s1.pop();}
                else{ s1.push(s[i]);}
            }
            else{ s1.push(s[i]);}
        }
        
        while(!s1.empty()){
          res.push_back(s1.top());
            s1.pop();
        }
         reverse(res.begin(),res.end());
        return res;
    }
};