/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
         ListNode *temp1=headB;
          while(temp1!=NULL){
           temp=headA;
              while(temp->next!=NULL){
                     if(temp==temp1){
                        break;
                     }else{
                        temp=temp->next;
                     }

              }
              if(temp==temp1){
                break;
              }
              temp1=temp1->next;
          }    if(temp!=temp1){
              temp=0;
          }
    return temp;
    }
};