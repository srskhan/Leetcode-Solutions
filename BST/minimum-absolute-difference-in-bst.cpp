/*
🔹 Problem: minimum-absolute-difference-in-bst
🔗 https://leetcode.com/problems/minimum-absolute-difference-in-bst/
🧠 Approach: 
⏱️ Time: 
📦 Space: 
*/

class Solution {
public:
    void inorder_traversal(TreeNode* root, vector<int> &v)
    {
        if(root == nullptr)
            return;
        
        inorder_traversal(root->left,v);
        v.push_back(root->val);
        inorder_traversal(root->right,v);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inorder_traversal(root, v);
        int mn = INT_MAX;
        for(int i= 1;i<v.size();i++)
        {
            mn = min(mn, v[i]-v[i-1]);
        }
        return mn;
    }
};