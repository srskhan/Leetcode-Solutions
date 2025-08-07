/*
🔹 Problem: convert sorted array to binary search tree
🔗 https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(logn)
*/


class Solution {
public:
    TreeNode* convert_to_BST(vector<int> &nums,int l,int r)
    {
        if(l > r) return nullptr;

        int mid = (l+r)/2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = convert_to_BST(nums, l, mid-1);
        root->right = convert_to_BST(nums, mid+1, r);        

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) 
            return nullptr;

        return convert_to_BST(nums, 0, nums.size()-1); 
    }
};