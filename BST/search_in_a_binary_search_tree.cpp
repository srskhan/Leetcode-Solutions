/*
🔹 Problem: search in a binary search tree
🔗 https://leetcode.com/problems/search-in-a-binary-search-tree/
🧠 Approach: 
⏱️ Time: O(h)
📦 Space: O(h)
*/


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;

        if(root->val == val)
            return root;

        if(val < root->val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);

        return root;
    }
};