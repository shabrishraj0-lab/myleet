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
    ListNode* reverseKGroup(ListNode* head, int k) {
          if(head==nullptr){
             return head;
          }
          int n=0;;
        ListNode *t=head;
        while(t!=nullptr){
            n++;
            t=t->next;       
         }
             ListNode* newHead = head;      
    ListNode* pT = nullptr;  
    ListNode* s =head;  
         while(n>=k){
            int g=k;t=s;
            while(g--){
               t=t->next;

            }   g=k; ListNode *m=s; ListNode *l=t;
            while(g--){
                ListNode *p=m->next;
                m->next=t;
                t=m;
                m=p;

            }
              if (pT == nullptr) newHead = t;   
        else pT->next = t;               

        pT = s;  
        s = m;          
      
            n-=k;
         }
         return newHead;
    }
};