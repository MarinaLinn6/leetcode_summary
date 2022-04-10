/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
        {
            return false;
        }
        ListNode *twoStep = head->next;
        while(head != NULL)
        {
            if(head == twoStep)
            {
                return true;
            }
            else if(twoStep == NULL)
            {
                return false;

            }
            else{
                head = head->next;
                if(twoStep->next != NULL)
                {
                    twoStep = twoStep->next;
                    if(twoStep->next != NULL)
                    {
                        twoStep = twoStep->next;
                        
                    }
                    else{
                        return false;

                    }
                }
                else{
return false;
                }
            }
        }
        return false;
    }
};