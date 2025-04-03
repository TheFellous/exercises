#include <bits/stdc++.h>

//Definition for a binary tree node.
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
        int minDepth(TreeNode* root) {

            if(root==nullptr) return 0; 
            
            int left = minDepth(root->left); 
            int right = minDepth(root->right); 


            if(!root->left)
                return right + 1; 
            else if (!root->right) 
                return left + 1; 
            else return std::min(left, right) + 1; 
        }
    };