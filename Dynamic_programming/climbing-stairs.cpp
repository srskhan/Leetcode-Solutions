/*
🔹 Problem: climbing-stairs
🔗 https://leetcode.com/problems/climbing-stairs/
🧠 Approach: Dynamic Programming
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    int dp[50];
    int fibo(int n)
    {
        if(n<3)
            return n;
        if(dp[n] != -1)
            return dp[n];
        
        dp[n] = fibo(n-1) + fibo(n-2);

        return dp[n];
    }
    int climbStairs(int n) {
        for(int i=0;i<50;i++){
            dp[i] = -1;
        }

        int ans = fibo(n);
        return ans;
    }
};