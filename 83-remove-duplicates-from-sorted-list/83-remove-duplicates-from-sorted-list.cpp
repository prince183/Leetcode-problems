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
        ListNode* curr=head;
        
        while(curr && curr->next)
        {
            ListNode* next_n = curr->next;
            if(curr->val == next_n->val)
                curr->next = next_n->next;
            else
                curr = next_n;       
        }
        return head;
    }
};