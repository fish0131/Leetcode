class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for (int i = 0; i < nums.size(); i++) {
        //     if(nums[i] >= target) break;
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(nums[i] + nums[j] == target)
        //             return {i, j};
        //     }
        // }
        // return {};
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if(map.count(remain)) {
                return {map[remain], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
