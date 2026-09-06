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
    ListNode* middleNode(ListNode* head) {
              int c=1;
              ListNode *temp=head;
               while(temp->next!=nullptr){
                    c++;
                    temp=temp->next;
               }
               cout<<c;
               ListNode *Temp=head;
               if(c>1){
                     if(c%2==0){
                        int g=c/2;
                        
                        cout<<g;while(g--){
                            Temp=Temp->next;
                        }
                     }else{
                        int g=(c/2);
                        cout<<g;
                        while(g--){
                            Temp=Temp->next;
                        }
                     }
               }
            return Temp;
    }


};