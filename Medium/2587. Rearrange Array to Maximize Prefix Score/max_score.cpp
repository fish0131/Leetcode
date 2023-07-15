class Solution {
public:
    int maxScore(vector<int>& nums) {
        // This problem is seem to have some confusions, it should return the length of positive integers in prefix array
        long long sum = 0;
        // Sort the array in descending order
        sort(nums.rbegin(), nums.rend());
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum <= 0) return i;
        }
        return nums.size();
    }
};
