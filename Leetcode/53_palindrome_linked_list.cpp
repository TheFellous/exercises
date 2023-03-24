// https://leetcode.com/problems/palindrome-linked-list/description/
// 23/03/23

#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
       std::vector<ListNode*> aux; 
       ListNode* sweep = head; 

       while(sweep){
        aux.push_back(sweep); 
        sweep = sweep->next; 
       }
       for(int i = 0; i < aux.size(); i++)
            if(aux[i]->val != aux[(aux.size() - 1) - i]->val) return false; 
       
       return true; 
        
    }
};