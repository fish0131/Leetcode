class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<int> res;
        unordered_set<int> res;
        unordered_map<int, int> m;
        for(auto n: nums) m[n]++;
        for(auto n: nums) {
            // if(m[n] > 1 && count(res.begin(), res.end(), n) == 0) res.push_back(n);
            if(m[n] > 1 && res.count(n) == 0) res.insert(n);
        }
        //return res;
        return vector<int> (res.begin(), res.end());
    }
};
