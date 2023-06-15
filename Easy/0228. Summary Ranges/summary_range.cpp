class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int s = 0;
        for (size_t i = 1; i <= nums.size(); i++) { //size_t is similar to unsigned int
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (s == i - 1) 
                    res.push_back(to_string(nums[s]));
                else
                    res.push_back(to_string(nums[s]) + "->" + to_string(nums[i - 1]));
                s = i;
            }
        }
        return res;
    }
};
