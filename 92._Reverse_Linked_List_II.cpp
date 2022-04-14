#include <iostream>
#include <string>

using namespace std;
struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x, ListNode *next) : val(x), next(next);
};

ListNode *getnewList(ListNode *head, int n, int m)
{

    ListNode *newhead = head;
    n = n - 1;
    while (n-- > 0)
    {
        newhead = newhead->next;
    }

    ListNode *currhead = newhead->next;
    ListNode *tail = newhead->next;
    ListNode *nexthead = newhead->next->next;
    for (int i = 0; i < m; i++)
    {
        ListNode *temp = nexthead->next;
        nexthead->next = currhead;
        currhead = nexthead;
        nexthead = temp;
    }

    newhead->next = currhead;
    tail->next = nexthead;
    return head;
}

int main()
{
    int a;
    cin >> a;

    ListNode *head = new ListNode(a, NULL);
    ListNode *temp = head;
    while (cin >> a)
    {
        ListNode *newnode = new ListNode(a, NULL);
        temp->next = newnode;
        temp = temp->next;
    }
}