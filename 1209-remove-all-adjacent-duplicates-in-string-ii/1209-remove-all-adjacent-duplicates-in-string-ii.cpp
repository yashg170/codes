class Solution {
public:
    string removeDuplicates(string &s, int k) {
   stack<pair<char,int> >s1; string res="";
        for(int i=0;i<s.length(); i++){
            if(!s1.empty()){
                if(s[i]==s1.top().first){ s1.top().second+=1; ;}
                else{   s1.push({s[i],1});}
            }
            else{ s1.push({s[i],1}); }
            if(s1.top().second==k){ s1.pop(); 
                      }
            
            
        }
        while(!s1.empty()){
          for(int i=0; i<s1.top().second; i++){  
              res+= s1.top().first;
          }
            
            s1.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};