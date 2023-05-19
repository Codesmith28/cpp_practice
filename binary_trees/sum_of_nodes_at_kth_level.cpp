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

int sumAtK(Node *root, int k)
{
    if (root == NULL)
    {
        return -1; // indicating sum not possible assuming no negative values in the tree
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp != NULL)
        {
            if (level == k)
            {
                sum += temp->data;
            }

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        else if (!q.empty())
        {
            q.push(NULL);
            level++; // next level is present
        }
    }

    return sum;
}

int main()
{
    cout << "Enter the level(root is at 0th level) : ";
    int k;
    cin >> k;

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << sumAtK(root, k) << endl;

    return 0;
}