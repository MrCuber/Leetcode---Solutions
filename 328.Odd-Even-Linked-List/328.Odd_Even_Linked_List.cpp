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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = NULL;
        ListNode *even = NULL;
        ListNode *oddh = NULL;
        ListNode *evenh = NULL;
        if(!head || !head->next || !head->next->next)
        {
            return head;
        }
        odd = head;
        even = head->next;
        oddh = odd;
        evenh = even;
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenh;
        return oddh;
    }
};
