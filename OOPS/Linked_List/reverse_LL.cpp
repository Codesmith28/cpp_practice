#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// insert at tail
void insertTail(node *&head, int val)
{
    node *n = new node(val);
    /*sensitive case (when there is no node in the LL):
     */
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

// reversing a LL (iterator method):
/* we will use 3 pointers:
    ->previous (initially at NULL before the head)
    ->current (initially at head)
    ->next  (always at current->next)

    then we change the link as follows:
        previous <- current     next
        i.e. make current point to prev from next

    then we increase all pointers by +1 upto which current != NULL
*/
node *reverse_iterate(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *nex; // will be initialised in the loop

    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nex;
    }
    return prev;
    // as prev will be our new head and all LL functions need head to operate
}

// reversing a LL using recursions:
/*
we will perform for the first node and send the remaining LL in a recursion
*/
node *reverse_recur(node *&head)
{
    // base case:
    /* one or no node: */
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverse_recur(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main()
{
    node *head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 5);

    display(head);
    cout << "\n";

    // to use the function:
    node *newhead = reverse_iterate(head);
    display(newhead);
    cout << "\n";

    node *newhead_2 = reverse_recur(newhead);
    display(newhead_2);
    cout << "\n";

    return 0;
}