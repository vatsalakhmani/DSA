class Solution {
public:
        int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        // Case 1:
        // nums is a left rotation of [0,1,2,...,n-1]
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (nums[0] + i) % n) {
                ok = false;
                break;
            }
        }

        if (ok) {
            int k = nums[0];

            // nums = LeftRotate(sorted, k)
            // Need (n-k) left rotations to sort.
            ans = min(ans, (n - k) % n);

            // We can also use:
            // Reverse + k left rotations + Reverse
            ans = min(ans, k + 2);
        }

        // Case 2:
        // nums is a left rotation of [n-1,n-2,...,0]
        ok = true;

        for (int i = 0; i < n; i++) {
            int expected = (nums[0] - i + n) % n;

            if (nums[i] != expected) {
                ok = false;
                break;
            }
        }

        if (ok) {
            int k = n - 1 - nums[0];

            /*
                nums = LeftRotate(reversed_sorted, k)

                Two possible ways:

                1. k left rotations + Reverse
                2. Reverse + (n-k) left rotations
            */

            ans = min(ans, k + 1);
            ans = min(ans, n - k + 1);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};