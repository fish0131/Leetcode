class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // nums1 最後一個有效數字
        int j = n - 1;       // nums2 最後一個元素
        int k = m + n - 1;   // nums1 的尾端位置（總長度 - 1

        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }

        // 如果 nums2 還有剩下，補上去（nums1 若剩就不用動）
        while (j >= 0) nums1[k--] = nums2[j--];
    }
};
