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
        ListNode* deleteDuplicates(ListNode* head) {
            
            ListNode* helper = head; 

            while(helper!=nullptr && helper->next!=nullptr){
                if(helper->val == helper->next->val)
                    helper->next = helper->next->next; 
                
                else helper=helper->next; 
            }
            return head; 
        }
    };