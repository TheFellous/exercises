#include <iostream>
#include <unordered_set>
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        std::unordered_set<ListNode*> list;  

        while(head != nullptr) {
            if (list.count(head)) return head; 
            list.insert(head); 
            head = head->next;  
        }
        return nullptr;
    }
};