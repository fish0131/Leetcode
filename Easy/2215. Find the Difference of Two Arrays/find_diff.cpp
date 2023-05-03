class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> set1{begin(nums1), end(nums1)};
        unordered_set<int> set2{begin(nums2), end(nums2)};

        for (int i = 0; i < nums1.size(); i++) {
            if (set2.count(nums1[i]) == 0) {
                if (count(ans[0].begin(), ans[0].end(), nums1[i]) == 0)
                    ans[0].push_back(nums1[i]);
            }
        }
        for (int j = 0; j < nums2.size(); j++) {
            if (set1.count(nums2[j]) == 0) {
                if (count(ans[1].begin(), ans[1].end(), nums2[j]) == 0)
                    ans[1].push_back(nums2[j]);
            }
        }
        return ans;
    }
};
