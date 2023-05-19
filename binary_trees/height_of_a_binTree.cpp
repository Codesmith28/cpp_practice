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

// the depth of tree's deepest node is the height of the tree

// recursive approach:
/* we will calculate height of left subTree and right subTree
then we will return the max of both + 1 for the current root node */

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
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

    cout << "Height of the binary tree is : " << calcHeight(root) << endl;
    return 0;
}