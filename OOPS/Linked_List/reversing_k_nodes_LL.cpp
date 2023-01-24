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
        cout << temp->data
             << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void insertTail(node *&head, int val)
{
    node *n = new node(val);
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

node *reverse_k(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nex;

    int count = 0;
    while (curr != NULL && count < k)
    {
        nex = curr->next;

        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
    if (nex != NULL)
    {
        head->next = reverse_k(nex, k);
    }

    return prev;
}
// reversing k nodes;
/* we can call the iterative reverse on entire list
then we call it for the list of size: size-k nodes */
// after this ; head->next = the node returned

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

    cout << "Enter the value of k: ";
    int k;
    cin >> k;

    cout << "\n";

    node *newHead = reverse_k(head, k);
    display(newHead);
    cout << "\n";

    return 0;
}