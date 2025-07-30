/*
🔹 Problem: binary tree inorder traversal
🔗 https://leetcode.com/problems/binary-tree-inorder-traversal/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    void inorder_traversal(TreeNode* root, vector<int> &ans)
    {
        if(root == nullptr) return;
        
        inorder_traversal(root->left, ans);
        ans.push_back(root->val);
        inorder_traversal(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder_traversal(root, ans);
        return ans;
    }
};