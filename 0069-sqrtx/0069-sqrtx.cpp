class Solution {
public:
    int mySqrt(int x) {
        int high=x/2;
        int low=1;
        if(x<2) return x;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long square=(long long) mid*mid;
            if (square == x) {
                return mid;
            } else if (square < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;     

    }
};