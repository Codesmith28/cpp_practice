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

// recursive approach
/*
we will count elements of left subTree
then count elements of right subTree
then we add them + 1 for the current root node */

int sumNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = sumNodes(root->left);
    int rightSum = sumNodes(root->right);

    return (leftSum + rightSum + root->data);
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

    cout << "Sum of all nodes in the binary tree is : " << sumNodes(root) << endl;
    
    return 0;
}