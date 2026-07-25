class Solution {
public:
    int maxProduct(int n) {
        // vector<int> m;
        // string num = to_string(n);

        // for (char c : num) {
        //     m.push_back(c - '0');
        // }

        // sort(m.begin(), m.end());

        // return m[m.size() - 1] * m[m.size() - 2];

        // string s = to_string(n);
        // sort(s.rbegin() , s.rend());
        // int maxProduct = (s[0]-'0')*(s[1]-'0');
        // return maxProduct;

        int largest=1,secondlargest=1;
        string num=to_string(n);
        for(char c:num){
            int digit=c-'0';
            if(digit>largest){
                secondlargest=largest;
                largest=digit;
            }else if(digit>secondlargest){
                secondlargest=digit;
            }
        }
       return largest*secondlargest;
    }
};