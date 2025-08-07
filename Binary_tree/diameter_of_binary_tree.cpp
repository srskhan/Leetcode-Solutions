/*
🔹 Problem: diameter of binary tree
🔗 https://leetcode.com/problems/diameter-of-binary-tree/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: 
*/

class Solution {
public:
    int mx=0;
    
    int max_height(TreeNode *root)
    {
        if(root == nullptr) 
            return 0;

        if(root->left == nullptr && root->right == nullptr) 
            return 1;

        int l = max_height(root->left);
        int r = max_height(root->right);
        int d = l+r;
        mx = max(mx,d);
        return max(l,r)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        max_height(root);
        return mx;
    }    
};