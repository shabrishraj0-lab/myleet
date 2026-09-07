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
ListNode* t = head;
int a[5000];
int k = 0;

while(t != nullptr) {
    a[k] = t->val;
    k++;
    t = t->next;
}

ListNode* node = nullptr;

for(int i = 0; i <k; i++) {
    node = new ListNode(a[i], node);
}

return node;
    }
         
};