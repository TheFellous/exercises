// https://leetcode.com/problems/symmetric-tree/
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
public:
    bool isSymmetric(TreeNode* root)
    {
        return compare(root->left, root->right); 
    }
private: 
    bool compare(TreeNode* root1, TreeNode* root2)
    {
        if(!root1 && !root2)
            return true; 
        if(root1 && !root2 || !root1 && root2 || root1->val != root2->val)
            return false; 

        return compare(root1->left, root2->right) && compare(root1->right, root2->left);  
    }   
};