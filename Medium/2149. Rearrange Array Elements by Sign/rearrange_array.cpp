class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        vector<int> pos;
        vector<int> neg;
        for(auto n: nums) {
            (n > 0 ? pos : neg).push_back(n);
        }
        for(int i = 0; i < pos.size(); i++) {
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};
