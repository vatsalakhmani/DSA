class Solution {
public:
    int maxProduct(int n) {
        vector<int> m;
        string num = to_string(n);

        for (char c : num) {
            m.push_back(c - '0');
        }

        sort(m.begin(), m.end());

        return m[m.size() - 1] * m[m.size() - 2];
    }
};