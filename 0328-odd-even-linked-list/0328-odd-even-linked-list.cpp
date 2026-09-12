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
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* next = curr->next;  
        curr->next = prev;            
        prev = curr;
        curr = next;                 
    }

    return prev;  
}
    ListNode* oddEvenList(ListNode* head) {
 
                 
ListNode *t = head;
ListNode *n = new ListNode(0);

if(t!=nullptr){
while (t != nullptr) {
    n = new ListNode(t->val, n);
    t = (t->next != nullptr) ? t->next->next : nullptr;
}

   
ListNode *p = head->next;
while (p != nullptr) {
    n = new ListNode(p->val, n);
    p = (p->next != nullptr) ? p->next->next : nullptr;
}
     
   n=reverseList(n);
   n=n->next;
}else{
    n=nullptr;
}
   
return n;


    }
};