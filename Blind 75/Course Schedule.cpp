class Solution {
public:
    // BFS
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses); // adjacency list
        vector<int> indegree(numCourses, 0);   // 入度紀錄: 紀錄每門課「有幾門課必須先修」
        
        // 建圖
        for (auto& p : prerequisites) {
            int course = p[0];
            int pre = p[1];
            graph[pre].push_back(course);
            indegree[course]++;
        }
        
        // 找出所有入度為 0 的課程（可以先修）
        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        int count = 0; // 記錄已修的課數
        
        while (!q.empty()) {
            int curr = q.front(); q.pop();
            count++;
            for (int next : graph[curr]) {
                indegree[next]--;
                if (indegree[next] == 0) q.push(next);
            }
        }

        // 如果修完課的數量等於總課數，代表可以修完
        return count == numCourses;
    }

    // // DFS
    // bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    //     vector<vector<int>> graph(numCourses);
    //     vector<int> visited(numCourses, 0);
        
    //     for (auto& p : prerequisites)
    //         graph[p[1]].push_back(p[0]);
        
    //     for (int i = 0; i < numCourses; i++) {
    //         if (!dfs(graph, visited, i)) return false;
    //     }
    //     return true;
    // }

    // bool dfs(vector<vector<int>>& graph, vector<int>& visited, int i) {
    //     if (visited[i] == 1) return false; // cycle detected
    //     if (visited[i] == 2) return true;  // already checked
        
    //     visited[i] = 1; // mark as visiting
    //     for (int next : graph[i]) {
    //         if (!dfs(graph, visited, next)) return false;
    //     }
    //     visited[i] = 2; // mark as done
    //     return true;
    // }
};
