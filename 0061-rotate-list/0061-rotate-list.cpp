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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==nullptr){
        return head;
       }
       int m=0; ListNode *t=head;ListNode *n=head;
         while(t!=nullptr){
            m++;
            t=t->next;
         }cout<<m;t=head;m=k%m;
         if(m==0){
            return head;
         }else{
        while(m--){
               ListNode *p=t;
               while(t->next!=nullptr){
                  p=t;
                  t=t->next;

               }
               
               
               
                      t->next=n;
                       n=t;  
                       p->next=nullptr;   
                       t=n;       
               
               
           
              
        }
        
          return n; 
         }
           
    }
};