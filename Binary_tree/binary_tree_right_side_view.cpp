/*
🔹 Problem: binary tree right side view
🔗 https://leetcode.com/problems/binary-tree-right-side-view/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: 
*/

class Solution {
public:
    void right_view(TreeNode* root, vector<int> &ans, int level)
    {
        if(root == nullptr)
            return;

        if(level == ans.size())
        {
            ans.push_back(root->val);
        }
    
        right_view(root->right, ans, level+1);
        right_view(root->left, ans, level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        right_view(root, ans, 0);
    
        return ans;
    }
};
