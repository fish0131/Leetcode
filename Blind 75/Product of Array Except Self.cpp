class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // ¥ª­¼¿n
        int left = 1;
        for(int i=0; i<n; i++) {
            ans[i] = left;   // ¥ª°¼­¼¿n¡A¤£¥]§t nums[i]
            left *= nums[i]; // §ó·s¥ª°¼²Ö¿n­¼¿n
        }

        // ¥k­¼¿n
        int right = 1;
        for(int i=n-1; i>=0; i--) {
            ans[i] *= right;  // ­¼¤W¥k°¼­¼¿n¡A¤£¥]§t nums[i]
            right *= nums[i]; // §ó·s¥k°¼²Ö¿n­¼¿n
        }

        return ans;
    }
};
