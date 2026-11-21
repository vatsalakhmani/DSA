class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int mid=(n-1)/2;
        // return nums[mid];
        int ans = nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == ans) cnt++;
            else cnt--;
            if(cnt == 0) {
                ans = nums[i];
                cnt = 1;
            }
        }
        return ans;
    }
};