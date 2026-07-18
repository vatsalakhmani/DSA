class Solution {
public:
    string removeStars(string s) {
      int n=s.length();
      stack<char> st;
      for(auto &c: s){
        if(c!='*'){
            st.push(c);
        } else{
            st.pop();
        }
      } 
      string ans;
      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};