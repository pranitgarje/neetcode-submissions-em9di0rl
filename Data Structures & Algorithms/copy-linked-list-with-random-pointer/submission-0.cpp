/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return NULL;
        Node* curr=head;
        while(curr!=nullptr){
              Node* newNode=new Node(curr->val);
              newNode->next=curr->next;
              curr->next=newNode;
              curr=curr->next->next;
        }
        // A->A'->B->B'->C->C'->NULL;
         curr=head;
         while(curr!=nullptr){
            if(curr->random){
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
            
         }
         // (A,C)->(A',C')->(B,A)->(B',A')->(C,NULL)->(C',NULL)

         curr=head;
         Node* copy_head=head->next;
         while(curr!=nullptr){
            Node* copy=curr->next;
            curr->next=copy->next;
            if(copy->next){
                copy->next=copy->next->next;
            }
            curr=curr->next;
         }
         return copy_head;


    }
};
