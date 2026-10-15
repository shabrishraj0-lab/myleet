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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> j(k);
      /*  if(head==nullptr){
            return j[0];
         }*/
        int n=0;ListNode *t=head;
        while(t!=nullptr){
             n++;
             t=t->next;
        }t=head;
        t=head;ListNode *h=head;int o=0;
        while(n>0){
    int g=(n+k-1)/k;
    int size=g;
            
            while(--g && t!=nullptr){
                   t=t->next;
            }
            j[o++]=h;
            if(t==nullptr)break;
            h=t->next;
            t->next=nullptr;
            t=h;
            n-=size;k--;
            

        }
          return j;

    }
};