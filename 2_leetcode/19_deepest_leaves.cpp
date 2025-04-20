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
public:
    int deepestLeavesSum(TreeNode *root)
    {
        int sum = 0;
        std::queue<TreeNode*> helper;
        if(!root) return 0; 

    
        helper.push(root); 
        while (!helper.empty())
        {
            sum = 0;
            for (int i = 0; i < helper.size(); i++)
            {
                TreeNode *current = helper.front();
                helper.pop();

                sum+= current->val; 
                if (current->left){
                    helper.push(current->left);
                }
                if (current->right){
                    helper.push(current->right);
                }
            }
        }
        return sum;
    }
};