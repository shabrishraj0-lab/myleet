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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* p=head;
        ListNode* t=head;int n=0;
        while(t!=nullptr){
            t=t->next;
            n++;
        }
        n=n/2;t=head; cout<<n;
        if(n>0){
        while(n--){
          p=t;
          t=t->next;
          
        }
    
        if(t!=nullptr){
        p->next=t->next;
        }else{
            p->next=nullptr;
        }
        }else{
            head=nullptr;
        }
        return head;
    }
};