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
        right = NULL;
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

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    // base case for recursion
    if (start > end)
    {
        return NULL;
    }

    static int idx = 4;

    int curr = postorder[idx];
    idx--;

    Node *node = new Node(curr);

    // if the node has no children or tree has only 1 element
    if (start == end)
    {
        return node;
    }

    // search fn for pos of curr in inorder
    int pos = search(inorder, start, end, curr);
    // right subtree
    node->right = buildTree(postorder, inorder, pos + 1, end);
    // left subtree
    node->left = buildTree(postorder, inorder, start, pos - 1);

    return node;
}

int main()
{

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(postorder, inorder, 0, 4);
    inorderTravel(root);
    cout << endl;

    return 0;
}