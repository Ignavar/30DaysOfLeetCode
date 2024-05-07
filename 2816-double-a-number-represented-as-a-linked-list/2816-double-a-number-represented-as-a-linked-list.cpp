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
    ListNode* doubleIt(ListNode* head) {
        ListNode* current = head;
        ListNode* temp = head;
        if(temp->val>=5)
        {
            ListNode* temp2 = new ListNode(1,temp);
            current = temp2;
        }
        while(temp!=nullptr)
        {
            if((temp->next!=nullptr)&&(temp->next->val>=5))
                temp->val = temp->val*2+1>=10?temp->val*2+1-10:temp->val*2+1;
            else 
                temp->val = temp->val*2>=10?temp->val*2-10:temp->val*2;
            temp = temp->next;
        }
        return current;
    }
};