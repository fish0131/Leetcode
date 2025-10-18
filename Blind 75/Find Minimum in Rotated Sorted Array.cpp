class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[0];
        int left = 0, right = nums.size()-1, mid;
        while(left < right) {
            mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]) {
                // Minimum must be on the right side
                left = mid + 1;
            }
            else {
                // Minimum is at mid or to the left of mid
                right = mid;
            }
        }
        return nums[left];
    }
};
