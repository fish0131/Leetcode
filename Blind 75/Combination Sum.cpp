class Solution {
public:
    void dfs(vector<int>& candidates, int target, vector<int>& tmp, int start, vector<vector<int>>& res) {
        if(target == 0) {
            res.push_back(tmp);
            return;
        }
        if(target < 0) return;
        for(int i=start; i<candidates.size(); i++) {
            tmp.push_back(candidates[i]);
            dfs(candidates, target-candidates[i], tmp, i, res);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        vector<vector<int>> res;
        dfs(candidates, target, tmp, 0, res);
        return res;
    }
};
