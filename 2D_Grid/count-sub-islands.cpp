/*
🔹 Problem: count-sub-islands
🔗 https://leetcode.com/problems/count-sub-islands/
🧠 Approach: Using DFS
⏱️ Time: O(n*m)
📦 Space: O(n*m)
*/

class Solution {
public:
    int n, m;
    bool flag;
    bool vis[505][505];
    vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool valid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid1,vector<vector<int>>& grid2) {
        vis[si][sj] = true;
        if(grid1[si][sj]==0)
            flag = false;
        for (int i = 0; i < 4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1) {
                dfs(ci, cj, grid1,grid2);
            }
        }
    }
    int countSubIslands(vector<vector<int>>& grid1,vector<vector<int>>& grid2) {
        n = grid2.size();
        m = grid2[0].size();
        int cnt=0;
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid2[i][j] == 1) {
                    flag = true;
                    dfs(i, j, grid1,grid2);
                    if(flag==true)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};