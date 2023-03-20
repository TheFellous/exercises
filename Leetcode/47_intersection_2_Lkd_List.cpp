// https://leetcode.com/problems/intersection-of-two-linked-lists efwe
// 20/03/23 
#include <bits/stdc++.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {    
        int size1{0}, size2{0}; 
        ListNode *aux1 = headA, *aux2 = headB; 
        while(aux1 || aux2){
            if(aux1) 
                size1++, 
                aux1 = aux1->next; 
            if(aux2)
                size2++, 
                aux2 = aux2->next; 
        }
        for(int i = 0; i < std::max(size1, size2) - std::min(size1, size2); i++)
            if(size1 > size2) headA = headA->next; 
            else              headB = headB->next; 
        
        while(headA && headB){
            if(headA == headB) return headA; 
            headA = headA->next; 
            headB = headB->next;
        }
        return nullptr; 
    }
};