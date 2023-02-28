// https://leetcode.com/problems/binary-tree-level-order-traversal/?envType=study-plan&id=level-1
// 28/02/23

 // Definition for a binary tree node.
 #include <iostream>
 #include <vector>

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
    void travel(std::vector<std::vector<int>> &layers, std::vector<TreeNode*> layer)
     { 
        std::vector<TreeNode*> aux{};
        std::vector<int> val_layer{};  
        if(!layer.empty()) {
            for (int i = 0; i < layer.size(); i++)
            {
                if(layer[i])
                {
                    if(layer[i]->left)
                        val_layer.push_back(layer.at(i)->left->val),
                        aux.push_back(layer[i]->left); 
                    if(layer[i]->right)
                        val_layer.push_back(layer.at(i)->right->val),
                        aux.push_back(layer[i]->right);  
                }
            }
            if(val_layer.size() > 0) layers.push_back(val_layer);  
            travel(layers, aux); 
        }
    }
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root)
    {
        if(!root) return {}; 

        std::vector<std::vector<int>> answer{{root->val}};
        std::vector<TreeNode*> layer{root};  
        travel(answer, layer); 

        return answer;    
    }
};




/* solution from a friend: 
class Solution {
private:
    std::map<int, std::vector<int>> map;
    void solve(TreeNode* root, int camada = 0)
    {
        if(!root) return;
        map[camada].push_back(root->val);

        solve(root->left, camada+1);
        solve(root->right, camada+1);
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        solve(root);

        std::vector<std::vector<int>> answ;
        for(std::pair<int, std::vector<int>> x : map)
            answ.push_back(x.second);
        
        return answ;
    }
};
*/