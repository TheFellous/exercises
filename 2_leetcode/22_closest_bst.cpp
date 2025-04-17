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
        int closestValue(TreeNode* root, double target) {
            
        }

        int sup(TreeNode* root, double target){


        }
        int inf(TreeNode* root, double target) {

            if(root->left){

                if(target > root->left->val){
                    
                }
            }
            

        }
    };