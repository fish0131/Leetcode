class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> res(2);
        map<int, int> lossCount;

        for (vector<int>& m : matches) {
            int winner = m[0];
            int loser = m[1];
            if (!lossCount.count(winner)) lossCount[winner] = 0;
            lossCount[loser]++;
        }

        for (auto& [player, nLoss] : lossCount)
        if (nLoss < 2)
            res[nLoss].push_back(player);

        return res;
    }
};
