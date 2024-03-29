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
    ListNode* swapPairs(ListNode* head)
    {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *p = head->next;
        head->next = swapPairs(p->next);
        p->next = head;
        // swap(p->val, p->next->val);
        // swapPairs(p->next->next);
        return p;
    }
};
