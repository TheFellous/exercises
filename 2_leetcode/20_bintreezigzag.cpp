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

class Solution
{
public:
    std::vector<std::vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        std::vector<std::vector<int>> answ;
        std::deque<TreeNode *> helper;
        helper.push_back(root);
        bool zigzag = 0;
        int i = -1;
        std::queue<int> p; 

        while (!helper.empty())
        {
            zigzag = !zigzag;
            int n = helper.size();

            i++;
            std::vector<int> layer; 
            for (int i = 0; i < n; i++)
            {
                TreeNode *current;
                if (zigzag)
                {
                    current = helper.front();
                    helper.pop_front();

                    if (current->left)
                        helper.push_back(current->left);

                    if (current->right)
                        helper.push_back(current->right);
                }

                else
                {
                    current = helper.back();
                    helper.pop_back();

                    if (current->right)
                        helper.push_front(current->right);
                    if (current->left)
                        helper.push_front(current->left);

                }

                layer.push_back(current->val);
            }
            answ.push_back(layer); 
        }
        return answ;
    }
};