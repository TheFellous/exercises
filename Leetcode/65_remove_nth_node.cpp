// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
// 01/04/23 - 19. Remove Nth Node From End of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* aux = head; 
        int counter = 0;

        while(aux) 
        aux = aux->next, 
        counter++; 
        
        if(counter - n == 0) return head->next;   
        
        aux = head;     
        for(int i = 0; i < counter - n - 1; i++) head = head->next; 

        if(head->next && head->next->next)
            head->next = head->next->next; 
        else if(head->next)
            head->next = nullptr; 
        else return nullptr; 
        
        return aux; 
        
    }
};

