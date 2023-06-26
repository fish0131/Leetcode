class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // hashmap
        unordered_map <int, int> m;
        vector <int> res;
         for (auto a : nums1) ++ m[a];
         for (auto a : nums2) {
             if (m[a] > 0) {
                 res.push_back(a);
                 m[a]--;
             }
        }
        return res;
    }
};
