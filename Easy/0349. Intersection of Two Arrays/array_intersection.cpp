class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res, temp(nums1.begin(), nums1.end());
        for(int n: nums2) {
            if(temp.count(n)) res.insert(n);
        }
        return vector<int> (res.begin(), res.end());
    }
};
