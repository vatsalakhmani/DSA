static const int _ = [](){ios_base::sync_with_stdio(false);cin.tie(NULL);return 0;}();

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lo=0, hi=nums.back()-nums[0];
        while (lo<hi) {
            int mid=lo+(hi-lo)/2, cnt=0;
            for (int i=0,j=0;i<(int)nums.size();++i) {
                while (nums[i]-nums[j]>mid) j++;
                cnt+=i-j;
            }
            if (cnt>=k) hi=mid; else lo=mid+1;
        }
        return lo;
    }
};
// class Solution {
// public:
//     int smallestDistancePair(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int low=0;
//         int high=nums[nums.size()-1]-nums[0];
//         int mid;
//         while(low<high){
//          mid=low+(high-low)/2;
//             int pairs_count=count_of_pairs(nums,mid);
//             if(pairs_count<k){mid=low+1;
//             }
//             else {high=mid;
//             }
//         }
//         return mid;
//     }
//     int count_of_pairs(vector<int> nums,int target_distance){
//         int left=0;
//         int count=0;
//         for(int right=0;right<nums.size();right++){
//             while((nums[right]-nums[left])>target_distance){
//                 left++;
//             }
//             count+=right-left;
//         }
//         return count;
//     }
// };