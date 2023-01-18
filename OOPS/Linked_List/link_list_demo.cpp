#include <bits/stdc++.h>
using namespace std;

// nodes are user defined and not set by default
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

// insert at head:
void insertHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// searching in LL:
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// function to print LL:
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertHead(head, 5);

    display(head);

    search(head, 28) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}