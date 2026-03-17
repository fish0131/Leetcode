class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int left = 0, right = m;

        ////////////////////////////////////////////////////
        //   if nums1 = [1,3,8,9], nums2 = [2,7,10,11]    //
        //   split them to nums1 = [1,3 | 8,9]            //
        //                 nums2 = [2,7 | 10,11]          //
        //               left partition | right partition //
        ////////////////////////////////////////////////////

        while(left <= right) {
            int i = (left + right) / 2;  // left partition
            int j = (m + n + 1) / 2 - i; // right partition

            int maxLeft1 = (i == 0) ? INT_MIN : nums1[i-1];
            int minRight1 = (i == m) ? INT_MAX : nums1[i];

            int maxLeft2 = (j == 0) ? INT_MIN : nums2[j-1];
            int minRight2 = (j == n) ? INT_MAX : nums2[j];

            // 左邊所有元素 ? 右邊所有元素
            if(maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if((m + n) % 2 == 0)
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                else
                    return max(maxLeft1, maxLeft2);
            }
            // nums1 左邊太大，i向左移
            else if(maxLeft1 > minRight2) right = i - 1;
            // nums1 左邊太小，i向右移
            else left = i + 1;
        }
        return 0.0;
    }
};
