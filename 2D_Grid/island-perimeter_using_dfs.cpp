/*
🔹 Problem: island-perimeter
🔗 https://leetcode.com/problems/island-perimeter/
🧠 Approach: Using DFS
⏱️ Time: O(n*m)
📦 Space: O(n*m)
*/

class Solution {
public:
    bool vis[105][105];
    int cnt=0;
    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
    int n,m;
    bool valid(int i,int j)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid)
    {
        vis[si][sj] = true;
        for(int i=0;i<4;i++){
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if(valid(ci,cj) == false)
                cnt++;
            else if(valid(ci,cj) && grid[ci][cj]==0)
                cnt++;
            else if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]== 1)
                dfs(ci,cj,grid);

        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == false && grid[i][j] == 1)
                    dfs(i,j,grid);
            }
        }

        return cnt;
    }
};