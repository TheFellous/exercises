#include <bits/stdc++.h>

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
    int helper(TreeNode *root, int max, int min)
    {
        if (!root)
            return max - min;
        
        int left = helper(root->left, std::max(max, root->val), std::min(min, root->val));
        int right = helper(root->right, std::max(max, root->val), std::min(min, root->val));

        return std::max(left, right);
    }

public:
    int maxAncestorDiff(TreeNode *root)
    {
        return helper(root, root->val, root->val);
    }
};