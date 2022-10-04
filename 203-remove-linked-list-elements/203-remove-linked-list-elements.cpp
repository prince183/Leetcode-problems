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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next =head;
        ListNode* tail = dummy;
        while(tail && tail->next)
        {
            if(tail->next->val == val)
            {
                ListNode* next_node = tail->next;
                tail->next = next_node->next;
                delete(next_node);
            }
            else
                tail= tail->next;
        }
        return dummy->next;
    }
};