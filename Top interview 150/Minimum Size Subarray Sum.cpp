class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX, head = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while(sum >= target && head <= i) {
                res = min(res, i - head + 1);
                sum -= nums[head++];
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};
