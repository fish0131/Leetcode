class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0], res = 0;
        for(int i = nums.size()-1; i > 0; i--) {
            // 當我們從右往左掃描的時候，一開始遇到的肯定是數組中的最大值
            // 當我們遇到第一個小於數組中的最大值的數字時，我們需要改動的是數組最後那一段數字
            if(nums[i] != nums[i-1]) res += nums.size() - i;
        }
        return res;
    }
};
