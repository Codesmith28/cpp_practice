#include <bits/stdc++.h>
using namespace std;



// preparing a linked list:
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

// inserting an element at the tail:
void insertTail(node *&head, int val)
{
    // sets the value at node n to val
    node *n = new node(val);

    // when LL has 1 element then head ptr = NULL
    // thus we need to make that n i.e. nth node  
    if( head == NULL )
    {
        head = n;
        return;
    }

    // we created a temp ptr which will iterate from head to end of the list
    node *temp = head;
    while( temp-> next != NULL )
    {
        temp = temp-> next;
    }
    // as it reached the end, this will convert the last node to node nth, which has value val
    temp -> next = n;

}

// deletion in the LL:
    // to delete the node which has the value == 'val'

/* this won't work for the corner case which is deletion of first element

(we access nth node via n-1th node)
this is because we are trying to access the node we want using next command 
thus even if our temp points to head it will delete head+1st element due to temp -> next... 


another corner case:
what if our LL is empty ?
    then we simply return (check by if head==NULL)



*/
void deletion(node *&head, int val)
{
    node *temp = head;
    // iterates upto which the data stored != val
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }

    //makes a ptr which points to the node to be deleted 
    node *todelete = temp->next;
    // sets the ptr in an entry such that 1 entry is skipped
    temp->next = temp->next->next;

    // deleted the node that was set
    delete todelete;
}


// in order to delete the first element:
void delHead(node* &head)
{
    node *todel = head;
    head = head->next;

    delete todel;
}


// both types of delete in one function:
    // (works even if only 1 element present in LL)
    // a complete delete function with no loose ends:

void annhilate_node(node* &head, int val)
{
    node *temp = head;

    if(head == NULL)
    {
        return;
    }

    else if(temp->data == val)
    {
        node *todelete = head;
        head = head->next;
         
        delete todelete;
    }
    else
    {
        while(temp->next->data != val)
        {
            temp = temp->next;
        }

        node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
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
    insertTail(head,1); 
    insertTail(head,2); 
    insertTail(head,3); 
    insertTail(head,4); 
    insertTail(head,5); 

    display(head);
    cout<<"\n";

    annhilate_node(head,5);

    display(head);
    cout<<"\n";

    annhilate_node(head,1);

    display(head);
    cout<<"\n";

    return 0;
}