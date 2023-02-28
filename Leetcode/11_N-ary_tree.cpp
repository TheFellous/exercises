//  https://leetcode.com/problems/n-ary-tree-preorder-traversal/?envType=study-plan&id=level-1
//  27/02/23

#include <iostream> 
#include <vector>
// Definition for a Node.
class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
private:
    void first_child(Node* start, std::vector<int> &answer) {
    if(start) {
        answer.push_back(start->val); 
        for(int i = 0; i < start->children.size(); i++) 
            first_child(start->children[i], answer); 
        }
    }

public:
    std::vector<int> preorder(Node* root) {
    
        std::vector<int> result{}; 
        first_child(root, result); 
        
        return result; 
    }        
};
