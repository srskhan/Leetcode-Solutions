/*
🔹 Problem: binary tree preorder traversal
🔗 https://leetcode.com/problems/binary-tree-preorder-traversal/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    void preorder_traversal(TreeNode* root, vector<int> &ans)
    {
        if(root == nullptr) return;
        ans.push_back(root->val);
        preorder_traversal(root->left, ans);
        preorder_traversal(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder_traversal(root, ans);
        return ans;
    }
};