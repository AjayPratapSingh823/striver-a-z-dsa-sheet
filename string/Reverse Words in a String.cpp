class Solution {
public:
    string reverseWords(string s) {
      string ans;
      stack<string>st;
    for(int i=0;i<s.size();i++){
      string words;
        if(s[i]==' ') continue;
        while(i<s.size() && s[i]!=' '){
           words+=s[i];
           i++;
        }
        st.push(words);
    }
    while(!st.empty()){
      ans+=st.top();
      st.pop();
      if(!st.empty())
        ans+=" ";
    }
    return ans;
        }
};
