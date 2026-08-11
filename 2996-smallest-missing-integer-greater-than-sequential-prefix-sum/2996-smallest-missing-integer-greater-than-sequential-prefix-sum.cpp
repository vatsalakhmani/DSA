class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int> visit(51,0);
        int n=nums.size();
        int sum=nums[0];
        for(auto it:nums) visit[it]=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else break;
        }
       
        while(sum<=50){
            if(visit[sum]) sum++;
            else return sum;
        }
        return sum;
    }
};