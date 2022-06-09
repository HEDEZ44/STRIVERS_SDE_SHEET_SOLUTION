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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = new ListNode(-1);
        ListNode *prev = temp;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int data = (l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0) + carry;
            carry = data / 10;
            data = data % 10;
            ListNode *nxt = new ListNode(data);
            prev->next = nxt;
            prev = prev->next;

            l1 = l1 != NULL ? l1->next : NULL;
            l2 = l2 != NULL ? l2->next : NULL;
        }
        return temp->next;
    }
};