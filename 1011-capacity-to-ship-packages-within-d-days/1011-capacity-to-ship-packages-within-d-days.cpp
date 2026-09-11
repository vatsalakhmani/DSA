class Solution {
public:
    int days_required(vector<int>& weights,int cap){
        int days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                load=weights[i];
                days=days+1;
            }
            else load+=weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            int days_req=days_required(weights,mid);
            if(days_req<=days){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};