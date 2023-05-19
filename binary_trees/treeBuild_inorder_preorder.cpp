#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *right;
    struct Node *left;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL
        ;
    }
};

void inorderTravel(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTravel(root->left);
    cout << root->data << " ";
    inorderTravel(root->right);
}

// search fn for pos of curr in inorder
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

// input both the arrays and the start and end index of inorder array
Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    // base case for recursion
    if (start > end)
    {
        return NULL;
    }

    // static because we want to keep track of the index
    static int idx = 0;

    int curr = preorder[idx];
    idx++;

    // making the new node for the current element
    Node *node = new Node(curr);

    int pos = search(inorder, start, end, curr);
    // making the left subtree
    node->left = buildTree(preorder, inorder, start, pos - 1);
    // making the right subtree
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    // building the tree
    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderTravel(root);
    cout << endl;
    return 0;
}