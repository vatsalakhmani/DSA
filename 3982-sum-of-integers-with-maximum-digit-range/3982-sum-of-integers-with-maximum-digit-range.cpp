class Solution {
public:
    int maxd(int x){
        if(x == 0) return 0;
        int maxi = 0;
        while(x){
            maxi = max(maxi, x % 10);
            x /= 10;
        }
        return maxi;
    }
    int mind(int x){
        if(x == 0) return 0;
        int mini = 9;
        while(x){
            mini = min(mini, x % 10);
            x /= 10;
        }
        return mini;
    }
    int maxDigitRange(vector<int>& nums) {
        int best = 0;
        vector<int> diff(nums.size());
        
        for(int i = 0; i < nums.size(); i++){
            diff[i] = maxd(nums[i]) - mind(nums[i]);
            best = max(best, diff[i]);
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(diff[i] == best)
                sum += nums[i];
        }
        return sum;
    }
};