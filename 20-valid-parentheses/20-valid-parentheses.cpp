class Solution {
public:
    bool isValid(string s) {
        int n=s.length(); int count1 =0; int count2=0;
         for(int i=0; i<n; i++){
             if(s[i]=='('|| s[i]=='{' || s[i]=='['){count1 ++;}
             if(s[i]==')' || s[i]=='}' || s[i]==']'){count2++; }
         }
        if(count1!=count2){ return 0;}
        else{
            stack<char>s1;
            for(int i=0; i<n; i++ ){
                  if(s[i]=='('|| s[i]=='{' || s[i]=='['){ s1.push(s[i]);}
                else if(!s1.empty()){
                    if((s[i]==')'&&s1.top()=='(') ||(s[i]==']'&&s1.top()=='[')||(s[i]=='}'&&s1.top()=='{')){ s1.pop();}
                 }
            }
        if(s1.empty())return 1;
                          return 0;
        }
        }
};