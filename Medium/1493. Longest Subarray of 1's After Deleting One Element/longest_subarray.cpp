class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0; // count the number of 0
        int res = 0;
        // find the longest subarray that contains only one 0 element
        for(int left = 0, right = 0; right < nums.size(); right++) {
            if(nums[right] == 0) count++;
            while(count == 2) {
                if(nums[left++] == 0) count--;
            }
            res = max(res, right - left);
        }
        return res;
    }
};
