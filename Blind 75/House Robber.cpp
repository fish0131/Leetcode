class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        // 不搶這間：那最大金額跟前一間相同 → dp[i - 1]
        // 搶這間：不能搶相鄰的前一間 → 要加上 dp[i - 2] + nums[i]

        for(int i=2; i<n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n-1];
    }
};
