class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // 50ms about 72%
        int n = nums.size();
        if(nums.empty()) return 0;

        int longest = 1;
        vector<int> dp(n, 1); // dp[i] = 以 nums[i] 結尾的最長遞增子序列長度
        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j]) dp[i] = max(dp[i], dp[j]+1);
            } 
            longest = max(longest, dp[i]);
        }
        return longest;

        // 最佳解 0ms 100%
        // vector<int> lis;
        // for (int x : nums) {
        //     auto it = lower_bound(lis.begin(), lis.end(), x); // 找出lis中>=x的最小值的位置
        //     if (it == lis.end()) lis.push_back(x);
        //     else *it = x;
        // }
        // return lis.size();
    }
};
