class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool check = false;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1]) {
                check = true;
                break;
            }
        }
        return check;
    }
};
