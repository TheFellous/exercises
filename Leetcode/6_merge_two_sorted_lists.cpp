//https://leetcode.com/problems/merge-two-sorted-lists/?envType=study-plan&id=level-1
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* aux = new ListNode();
        ListNode* forward   = aux;
            
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) 
                forward->next = new ListNode(list1->val), 
                forward = forward->next, 
                list1 = list1->next; 
            else 
                forward->next = new ListNode(list2->val), 
                forward = forward->next,
                list2 = list2->next; 
        }
        if(list1 == nullptr) 
            forward->next = list2; 
        else
            forward->next = list1; 
               
        return aux->next; 
    }
};
