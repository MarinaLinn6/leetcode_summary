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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *secondhead = head->next;
        ListNode *secondtemp = secondhead;
        ListNode *firsttemp = head;

        // check if node is null
        while (secondtemp != NULL && secondtemp->next != NULL)
        {
            // seperate even list and odd list
            firsttemp->next = firsttemp->next->next;
            firsttemp = firsttemp->next;
            secondtemp->next = secondtemp->next->next;
            secondtemp = secondtemp->next;
        }
        // connect first half of list to the head of second list
        firsttemp->next = secondhead;
        return head;
    }
};