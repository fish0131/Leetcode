class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int ans;
        // bool flag = false;
        // for(int i=0; i<nums.size(); i++) {
        //     if(nums[i] == target) {
        //         ans = i;
        //         flag = true;
        //         break;
        //     }
        // }
        // if(flag) return ans;
        // else return -1;

        int left = 0, right = nums.size()-1, mid;

        while(left <= right) {
            mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            
            // Check if left half is sorted
            if(nums[left] <= nums[mid]) {
                if(nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else {
                if(nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};
