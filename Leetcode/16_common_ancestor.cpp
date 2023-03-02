//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/?envType=study-plan&id=level-1
// 02/03/23
#include <iostream>
#include <vector>
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
private:
    std::vector<TreeNode*> search(TreeNode* find, TreeNode* root)
    {
        std::vector<TreeNode*> container;

        while(root != find)
        {
            container.push_back(root);

            if(root->val > find->val)
                root = root->left;
            else
                root = root->right;
        }

        container.push_back(root);
        return container;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        std::vector<TreeNode*> compare = search(p, root); 
        std::vector<TreeNode*> compare2 = search(q, root);

        int i = 0;

        while(i < std::min(compare.size(), compare2.size()) && compare[i] == compare2[i])
            i++;

        return compare[i-1];
    }
};