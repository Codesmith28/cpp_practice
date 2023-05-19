#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    struct Node *right;
    struct Node *left;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printLevelORder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // first element in the queue
        Node *node = q.front();
        // removing the first element in the queue
        q.pop();

        if (node != NULL)
        {
            cout << node->data << " ";
            // push the left child
            if (node->left)
            {
                q.push(node->left);
            }

            // push the right child
            if (node->right)
            {
                q.push(node->right);
            }
        }

        // if the node is NULL
        else if (!q.empty())
        {
            // this means the level is complete
            q.push(NULL);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelORder(root);
    return 0;
}