// https://leetcode.com/problems/add-two-numbers/description/ 
//  23/03/23 
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* sum = new ListNode();
        ListNode* head = sum; 
        ListNode* aux = nullptr;
        bool cout = true; 
        while(l1 && l2)
        {
            sum->next = new ListNode();
            sum->val += l1->val + l2->val;

            if(sum->val >= 10)
                sum->next->val++, 
                sum->val -= 10; 

            l1 = l1->next;
            l2 = l2->next;
            aux = sum; 
            sum = sum->next; 
            if(sum->val == 0 && (!l1 || !l2)) cout = false; 
        }
        if(!l1 && !l2 && !cout) aux->next = nullptr; 

        if(l1) bigger_list(l1, cout, aux); 
        if(l2) bigger_list(l2, cout, aux); 

        return head; 
    }
private: 
    void bigger_list(ListNode* l1, int carry_out, ListNode* aux)
    {
        aux->next = l1;
        bool first = true;  
        while(l1 && carry_out)
        {
            if(first && l1->val != 9) carry_out = false;   
            if(l1->val != 10 && !first) carry_out = false; 

            if(l1->next && carry_out)
                l1->val = 0,  
                l1->next->val++;   
            else if(first) l1->val++; 

            if(!l1->next && carry_out)
                l1->next = new ListNode(1), 
                l1->val = 0; 
            
            l1 = l1->next; 
            first = false; 
        } 
    }
};



