/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode *aux = head;
        int counter = 0; 
        
        while(aux != nullptr) {
            aux = aux->next; 
            counter++; 
        } 
        counter = counter/2; 
        for(int i = 0; i < counter; i++) 
            head = head->next;

        return head; 

    }
};