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
    int diameter = 0; 
    public:
        int diameterOfBinaryTree(TreeNode* root) {
            return maxLength(root); 
            
        }

        int maxLength(TreeNode* root){ 

            if(!root) return 0; 

            int left = maxLength(root->left);  
            int right = maxLength(root->right);
            
            diameter = std::max(diameter, left + right); 

            return std::max(left, right) + 1; 



        }
    };