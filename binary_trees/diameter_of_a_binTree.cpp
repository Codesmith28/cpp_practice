#include <iostream>
#include <algorithm>
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

// diameter of a binary tree is the number of nodes in the longest path between 2 leaves

// recursive approach:
/*
we will find the left diameter and height
same for right child from a root node

if diameter passes through the root then the following will apply:
1 + lHeight + rHeight

if the diamater does not pass through the root then the following will apply:
max(lDiameter, rDiameter)
*/

// O(n^2) approach:
// int height(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int lHeight = height(root->left);
//     int rHeight = height(root->right);

//     return max(lHeight, rHeight) + 1;
// }

// int diameter(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int lHeight = height(root->left);
//     int rHeight = height(root->right);

//     int curr = 1 + lHeight + rHeight;

//     int lDiameter = diameter(root->left);
//     int rDiameter = diameter(root->right);

//     return max({curr, lDiameter, rDiameter});
// }

// O(n) approach:
int diameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;
    int ld = diameter(root->left, &lh);
    int rd = diameter(root->right, &rh);

    int curr = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max({curr, ld, rd});
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

    int height = 0;
    cout << diameter(root, &height) << endl;
    return 0;
}