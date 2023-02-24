//https://leetcode.com/problems/reverse-linked-list/description/?envType=study-plan&id=level-1
// 24/02/23
#include <iostream>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    
    ListNode *backward = nullptr; 
    ListNode *current = head; 
    ListNode *new_head = nullptr; 
    while(current != nullptr) {

        if(current->next == nullptr)
            new_head = current; 

        ListNode *forward = current->next;         
        current->next = backward;
        backward = current; 
        current = forward;
        
    }
    return new_head; 
    }
};