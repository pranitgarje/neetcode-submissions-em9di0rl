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
 ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* nextNode;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
         ListNode* slow=head;
        ListNode* fast=head;
        int n=0;
        while(fast && fast->next){
            n++ ;
            slow=slow->next;
            fast=fast->next->next;
        } 
        ListNode* rev=reverseList(slow->next);
        slow->next=nullptr;
        while(head && rev){
            ListNode* newNode=head->next;
             head->next=rev;
             rev=rev->next;
             head->next->next= newNode;     
             head=head->next->next;
           
            
        }
      
       
         
    }
};
