/*
🔹 Problem: maximum depth of binary tree
🔗 https://leetcode.com/problems/maximum-depth-of-binary-tree/
🧠 Approach: 
⏱️ Time: 
📦 Space: 
*/

class Solution {
public:
    int max_depth(TreeNode* root)
    {
        if(root == nullptr) 
            return 0;

        if(root->left == nullptr && root->right == nullptr) 
            return 1;

        int l = max_depth(root->left);
        int r = max_depth(root->right);

        return max(l,r)+1;

    }
    int maxDepth(TreeNode* root) {
        return max_depth(root);
    }
};