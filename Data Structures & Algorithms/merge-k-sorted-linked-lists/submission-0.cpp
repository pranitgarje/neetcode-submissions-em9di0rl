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
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(list1 && list2){
            if(list1->val<list2->val){
                tail->next=list1;
                list1=list1->next;
            }
            else{
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }
        while(list1){
            tail->next=list1;
            list1=list1->next;
            tail=tail->next;
        }
            while(list2){
            tail->next=list2;
            list2=list2->next;
            tail=tail->next;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
          int n=lists.size();
         if(n==0){
            return nullptr;
        }
        
        ListNode* l1=lists[0];
      
        if(!l1 && n==1){
            return nullptr;
        }
       
        for(int i=1;i<n;i++){
            l1=mergeTwoLists(l1,lists[i]);
        }
        return l1;
    }
};
