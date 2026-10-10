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
    ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr) return head;

    ListNode *t = head, *y = head;
    while (t != nullptr) {
        while (y != nullptr && t->val == y->val) {
            y = y->next;
        }
        t->next = y;
        t = y;
    }
    return head;
           
    }
};