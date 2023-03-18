// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// 18/03/23
#include <bits/stdc++.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* rec(std::vector<int>& nums, int front, int end)
    {
        if(front > end) return nullptr;

        int mid = (front + end)/2; 

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = rec(nums, front, mid - 1);
        root->right = rec(nums, mid + 1, end);

        return root;
    }
    TreeNode* sortedArrayToBST(std::vector<int>& nums) 
    {

        if(nums.size() == 0) return nullptr;

        if(nums.size() == 1) return new TreeNode(nums[0]);

        return rec(nums, 0, nums.size() - 1);
    }
};
