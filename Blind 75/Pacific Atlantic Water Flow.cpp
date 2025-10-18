class Solution {
public:
    vector<int> dr = {1, -1, 0, 0};
    vector<int> dc = {0, 0, 1, -1};
    int m, n;

    void dfs(int r, int c, vector<vector<int>>& heights, vector<vector<bool>>& visited) {
        visited[r][c] = true;
        for(int i=0; i<4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr < 0 || nc < 0 || nr >= m || nc >= n) continue;
            if(visited[nr][nc]) continue;
            if(heights[nr][nc] < heights[r][c]) continue;
            dfs(nr, nc, heights, visited);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();;
        n = heights[0].size();
        vector<vector<bool>> pac(m, vector<bool>(n, false));
        vector<vector<bool>> atl(m, vector<bool>(n, false));

        for(int i=0; i<m; i++) {
            dfs(i, 0, heights, pac);
            dfs(i, n-1, heights, atl);
        }

        for(int i=0; i<n; i++) {
            dfs(0, i, heights, pac);
            dfs(m-1, i, heights, atl);
        }

        vector<vector<int>> ans;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(pac[i][j] && atl[i][j]) ans.push_back({i, j});
            }
        }
        return ans;
    }
};
