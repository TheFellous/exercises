// https://leetcode.com/problems/binary-tree-inorder-traversal/
// 11/03/23 
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
private: 
std::vector<int> answ; 

    void rec(TreeNode* root)
    {
        if(!root) return; 

        rec(root->left); 
        answ.push_back(root->val); 
        rec(root->right); 
    }
public:
    std::vector<int> inorderTraversal(TreeNode* root)
    {
        rec(root); 
        return answ; 
    }
};