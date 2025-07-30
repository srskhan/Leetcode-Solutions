/*
🔹 Problem: sum of left leaves
🔗 https://leetcode.com/problems/sum-of-left-leaves/
🧠 Approach: 
⏱️ Time:O(n)
📦 Space:
*/

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root == nullptr) return 0;
        if(root->left){
            if(root->left->left == nullptr && root->left->right == nullptr){
                sum += root->left->val;
            }
        }
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};