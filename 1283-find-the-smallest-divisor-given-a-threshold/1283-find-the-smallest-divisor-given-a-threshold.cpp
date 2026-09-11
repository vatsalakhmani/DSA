class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            int sum=0;
            for(int i:nums){
                sum+=ceil((double)i/mid);
            }
            if(sum<=threshold) high=mid-1;
            else if(sum>threshold) low=mid+1;
        }
        return low;
    }
};