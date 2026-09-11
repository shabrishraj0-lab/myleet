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
    ListNode *detectCycle(ListNode *head) {
ListNode *t = head;
ListNode *b = head;
ListNode *o = NULL;

while (b != NULL && b->next != NULL) {
    t = t->next;
    b = b->next->next;

    if (t == b) {
        // found a cycle -> reset t to head, advance both 1 step at a time
        t = head;
        while (t != b) {
            t = t->next;
            b = b->next;
        }
        o = t;
        break;
    }
}

return o;
    

    }

    
};