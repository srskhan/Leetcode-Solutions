/*
🔹 Problem: keys-and-rooms
🔗 https://leetcode.com/problems/keys-and-rooms/
🧠 Approach: 
⏱️ Time: O(N+E)
📦 Space: O(N)
*/

class Solution {
public:
    bool vis[1005];
    void bfs(int source,vector<vector<int>>& rooms) {
        queue<int> q;
        q.push(source);
        vis[source] = true;

        while (!q.empty()) {
            int par = q.front();
            q.pop();

            for (int child : rooms[par]) {
                if (!vis[child]) {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        memset(vis,false,sizeof(vis));
        bfs(0,rooms);

        int n= rooms.size();
        for(int i=0;i<n;i++){
            if(vis[i]==false)
                return false;
        }
        return true;
    }
};