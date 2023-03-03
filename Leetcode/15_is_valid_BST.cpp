// https://leetcode.com/problems/validate-binary-search-tree/description/?envType=study-plan&id=level-1
// 01/03/23
 #include <iostream>
 #include <vector>
 // Definition for a binary tree node.
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
    bool isValidBST(TreeNode* root) 
    {
        std::vector<int> compare; 
        travel(root, compare); 
        for(int i = 0; i < compare.size() - 1; i++)
            if(compare[i+1] <= compare[i])
                return false; 
        return true; 

    }
private:
    void travel(TreeNode* root, std::vector<int> &holder)
    {
        if(!root) return; 
        
        travel(root->left, holder); 
        holder.push_back(root->val);
        travel(root->right, holder);      
    }
};