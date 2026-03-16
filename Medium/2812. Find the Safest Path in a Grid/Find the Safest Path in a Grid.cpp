class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, -1));

        queue<pair<int,int>> q;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }

        const int dx[] = {-1, 1, 0, 0};
        const int dy[] = {0, 0, 1, -1};

        // BFS
        while(!q.empty()) {
            auto [x,y] = q.front(); // current thief
            q.pop();

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx>=0 && ny>=0 && nx<n && ny<n && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }

        // binary search
        int l = 0, r = n*n;

        // 檢查 safeness ? k 是否可達終點
        auto can =[&](int k) {

            if(dist[0][0] < k) return false;

            queue<pair<int,int>> qq; // 用來走path
            vector<vector<int>> visited(n,vector<int>(n,0));

            qq.push({0, 0});
            visited[0][0] = 1;

            // BFS
            while(!qq.empty()) {
                auto [x,y] = qq.front(); // current
                qq.pop();

                // 如果可到達右下角
                if(x == n-1 && y == n-1) return true;

                for(int i=0; i<4; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if(nx>=0 && ny>=0 && nx<n && ny<n 
                        && visited[nx][ny] == 0 && dist[nx][ny] >= k) {
                            visited[nx][ny] = 1;
                            qq.push({nx, ny});
                    }
                }
            }
            return false;
        };
        // binary search
        while(l < r) {
            int mid = (l+r+1)/2;
            if(can(mid)) l = mid;
            else r = mid - 1;
        }
        return l;
    }
};
