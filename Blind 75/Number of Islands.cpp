class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();

        // 邊界檢查 + 水的情況
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;

        // 將當前格子設為 '0'，避免重複訪問
        grid[i][j] = '0';

        // 四個方向繼續擴展
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int m = grid.size(), n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;          // 發現一座新島
                    dfs(grid, i, j);  // 淹沒整座島
                }
            }
        }
        return count;
    }
};
