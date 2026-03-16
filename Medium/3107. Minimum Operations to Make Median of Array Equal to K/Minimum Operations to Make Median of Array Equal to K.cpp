class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        // 只需要調整 median 附近的元素，其他元素不影響 median
        long long ans = 0;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int m = n/2;

        // three cases
        // case 1: nums[m] < k --> 需要把 median 右邊不夠大的元素提升到 ? k
        // case 2: nums[m] > k --> 需要把 median 左邊過大的元素降低到 ? k
        // case 3: nums[m] == k --> 不用動

        if(nums[m] < k) {
            for(int i=m; i<n; i++) {
                if(nums[i] < k) ans += k - nums[i];
            }
        }
        else {
            for(int i=0; i<=m; i++) {
                if(nums[i] > k) ans += nums[i] - k;
            }
        }
        return ans;
    }
};
