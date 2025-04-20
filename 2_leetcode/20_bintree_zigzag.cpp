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


class Solution {
    public:
        std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {

            std::vector<std::vector<int>> answ; 
            std::deque<TreeNode*> helper; 
            bool zigzag = 1; 
            helper.push_back(root); 
            int index=-1; 
            while(!helper.empty()){
                answ.push_back(std::vector<int>());

                zigzag = !zigzag; 
                int n = helper.size(); 
                index++; 
                answ.push_back(std::vector<int> ()); 

                for(int i = 0; i < n; i++){
                    TreeNode* current;
                    if(zigzag) {
                        current = helper.back(); 
                        helper.pop_back();
                        
                        if(current->right)
                        helper.push_back(current->right); 
                        if(current->left) 
                        helper.push_back(current->left); 
                        
                    }
                    else{
                        current = helper.front(); 
                        helper.pop_front();  
                        
                        if(current->right){
                            helper.push_front(current->right); 
                        }
                        if(current->left) {
                            helper.push_front(current->left); 
                        }
                        
                    } 
                    answ[index].push_back(current->val); 
                }

            }
            return answ;             
        }
    };