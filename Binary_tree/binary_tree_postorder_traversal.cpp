/*
🔹 Problem: binary tree postorder traversal
🔗 https://leetcode.com/problems/binary-tree-postorder-traversal/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(n)
*/

class Solution {
public:
    void postorder_traversal(TreeNode* root, vector<int> &ans)
    {
        if(root == nullptr) return;
        postorder_traversal(root->left , ans);
        postorder_traversal(root->right , ans);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder_traversal(root, ans);
        return ans;
    }
};