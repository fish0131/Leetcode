class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_left = 0, sum_right = 0, sum_total = 0;
        int pivot = 0;
        int n = nums.size();
        for(; pivot < n; pivot++) {
            sum_total += nums[pivot];
        }
        if(sum_total - nums[0] == 0) return 0;
        for(pivot = 1; pivot < n; pivot++) {
            sum_left += nums[pivot-1];
            sum_right = sum_total - nums[pivot] - sum_left; 
            if(sum_left == sum_right) return pivot;
        }
        return -1;
    }
};
