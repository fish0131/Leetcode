class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> res = nums;
        sort(nums.begin(), nums.end());
        for(int i = nums.size() - 1; i >= 0; i--) {
            m[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++) {
            res[i] = m[res[i]];
        }
        return res;
    }
};
