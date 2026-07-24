class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]!=t[i]) return t[i];
        // }
        // return t[s.size()];
        if(s.length()==0) return t[0];

        char ans=0;
        for(int i=0;i<s.length();i++){
            ans=ans^s[i];
        }
        for(int i=0;i<t.length();i++){
            ans=ans^t[i];
        }
        return ans;
    }
};