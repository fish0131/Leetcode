class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), cnt = 2;
        if(n <= 2) return n;
        for(int i=2; i<n; i++) {
            if(nums[i] != nums[cnt-2]) nums[cnt++] = nums[i];
        }
        return cnt;
    }
};
