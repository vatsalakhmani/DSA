class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> result;
        int i=0;
        while(i<s1.length()){
            string str1="";
            string str2="";
            while(s1[i]!=s2[i]){
                str1+=s1[i];
                str2+=s2[i];
                i++;
            }
            if(str1!=""&&str2 != ""){
                result.push_back({str1,str2});
            }
            i++;
        }
        return result;
    }
};