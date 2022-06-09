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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *l1 = list1, *l2 = list2;
        ListNode *nlist = new ListNode(-1);
        ListNode *temp = nlist;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                nlist->next = l1;
                nlist = nlist->next;
                l1 = l1->next;
            }
            else
            {
                nlist->next = l2;
                nlist = nlist->next;
                l2 = l2->next;
            }
        }
        if (l1 != NULL)
            nlist->next = l1;
        if (l2 != NULL)
            nlist->next = l2;
        return temp->next;
    }
};