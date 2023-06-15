class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> range(n+1);
        // for (int i = 0; i <= n; i++) {
        //     range[i] = i;
        // }
        // Assigns to every element in the range [first,last) incremented
        iota(range.begin(), range.end(), 0); 
        for (int i = 0; i < n; i++) { // for(int i : nums)
            range.erase(remove(range.begin(), range.end(), nums[i]), range.end());
        }
        return range[0];
    }
};
