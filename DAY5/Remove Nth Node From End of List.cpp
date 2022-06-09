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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head, *t = head;
        while (n--)
        {
            temp = temp->next;
        }
        if (!temp)
            return head->next;
        while (temp->next != NULL)
        {
            temp = temp->next;
            t = t->next;
        }
        t->next = t->next->next;
        return head;
    }
};