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
    void deleteNode(ListNode* node) {
        ListNode* prev;
        ListNode* current = node;
        while(current->next!=nullptr)
        {
            current->val=(current->next)->val;
            prev = current;
            current = current->next;
        }
        prev->next=nullptr;
    }
};