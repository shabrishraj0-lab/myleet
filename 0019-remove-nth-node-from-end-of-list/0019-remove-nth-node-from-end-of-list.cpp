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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* t = head;
int m = 0;

while (t != nullptr) {
    m++;
    t = t->next;
}

if (m == 1) {
    head = nullptr;
    return head;
}

if (n == m) {
    head = head->next;
    return head;
}

t = head;

int y = m - n - 1;

while (y > 0) {
    t = t->next;
    --y;
}

// t is the node BEFORE the node to be deleted
t->next = t->next->next;

return head;}
};