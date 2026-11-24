class Solution {
public:
    int findGCD(vector<int>& nums) {
      int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int gcd=mini;
        for(int i=1;i<=mini;i++){
            if((mini%i==0)&&(maxi%i==0)) gcd=i;
        }
        return gcd;
    }
};