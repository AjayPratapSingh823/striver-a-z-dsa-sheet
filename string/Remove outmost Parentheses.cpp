class Solution {
public:
    string removeOuterParentheses(string str) {
     string ans;
    stack<int>s;
    for(int i=0;i<str.size();i++){
          if(str[i]=='('){
            if(s.size()>0){
            ans+=str[i];
            }
            s.push(str[i]);
          }else{
            s.pop();
            if(s.size()>0)
            ans+=str[i];
          }
        }
        return ans;   
    }
};
