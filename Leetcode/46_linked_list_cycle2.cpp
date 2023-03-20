// https://leetcode.com/problems/linked-list-cycle/
// 18/03/23

#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        
        ListNode* sweep = head;
        ListNode* skip_one = head;
        
        while (skip_one->next && skip_one->next->next) {
            sweep = sweep->next;
            skip_one = skip_one->next->next;
            
            if (sweep == skip_one) return true;
        }
        return false;
    }
};

/* First solution: 
class Solution {
public:
    bool hasCycle(ListNode *head) {

        std::set<ListNode*> aux{}; 
        while(head){
            if(aux.count(head)) return true; 
            aux.insert(head); 
            head = head->next; 
        }
        return false; 
        
    }
};
*/

