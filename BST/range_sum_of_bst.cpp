/*
🔹 Problem: range sum of bst
🔗 https://leetcode.com/problems/range-sum-of-bst/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(h)
*/


class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == nullptr) return 0;

        if(root->val >= low && root->val <= high)
            sum += root->val;

        sum += rangeSumBST(root->left, low, high);
        sum += rangeSumBST(root->right, low, high);

        return sum;
    }
};