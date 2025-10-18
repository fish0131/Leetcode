class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int cnt = 1, longest = 1;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] == nums[i+1]-1) cnt++;
            else if(nums[i] == nums[i+1]) continue;
            else {
                longest = max(longest, cnt); // update longest
                cnt = 1;  // reset for new streak
            }
        }
        return max(longest, cnt);
    }
};
