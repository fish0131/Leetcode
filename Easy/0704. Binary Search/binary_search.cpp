class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while(left != right) {
            int mid = (left + right) / 2;
            if(nums[mid] >= target) right = mid;
            else left += 1;
        }
        if(nums[left] != target) return -1;
        return left;
    }
};
