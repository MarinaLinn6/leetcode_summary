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
        ListNode *faster = head;
        int i = 0;
        while (i < n)
        {
            faster = faster->next;
            i++;
        }
        if (faster == NULL)
        {
            return head->next;
        }
        ListNode *mhead = head;
        ListNode *onebefore = head;
        while (faster != NULL)
        {
            onebefore = mhead;
            mhead = mhead->next;
            faster = faster->next;
        }
        onebefore->next = mhead->next;
        return head;
    }
};