class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int high=nums.size()-1;
        while(lo<=high){
            int mid=lo+(high-lo)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[lo]){
               if(target>=nums[lo]&&nums[mid]>target){
                high=mid-1;
               }
               else
               lo=mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[high])
                lo= mid+1;
                else
                high=mid-1;
            }
        }
        return -1;
    }
};