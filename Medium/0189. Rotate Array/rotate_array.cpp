class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (nums.empty() || (k %= n) == 0) return;
        for (int i = 0; i < n - k; ++i) {
            nums.push_back(nums[0]); // push_back() is push the element to the last one of vector
            nums.erase(nums.begin());
        }
    }
};
