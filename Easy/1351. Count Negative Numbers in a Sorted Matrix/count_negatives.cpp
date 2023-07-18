class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto& row : grid) {
            for (auto n : row) {
                if(n < 0) count++;
            }
        }
        return count;
    }
};
