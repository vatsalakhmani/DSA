class Solution {
public:
    int hammingWeight(int n) {
        int onebit=0;
        while(n>0){
            onebit += (n%2);
            n>>=1;
        }
        return onebit;
    }
};