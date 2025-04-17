#include <bits/stdc++.h>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public: 
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        TreeNode* current = root; 
        TreeNode* insertion = new TreeNode(val); 
        if(!current) return insertion;
    
        while(current){
            if(val < current->val){
                if(current->left)
                    current = current->left; 
                
                else {
                    current->left = insertion; 
                    return root; 
                } 
            }
            else if(current->right)
                current = current->right; 
            
            else{
                current->right = insertion; 
                return root; 
            }
        }
        return root; 

    }
}; 