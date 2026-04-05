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
ListNode* rec(ListNode* head){
    if(!head) return NULL;
     ListNode* newHead=head;
     if(head->next){
        newHead=reverseList(head->next);
        head->next->next=head;
     }
     head->next=nullptr;
     return newHead;

    
}
    ListNode* reverseList(ListNode* head) {
       
        // Challenge: Do this using recursion
        return rec(head);
    }
};
