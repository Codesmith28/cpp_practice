#include <iostream>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

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

int search(int in[], int start, int end, int curr)
{
    rep(i, start, end + 1)
    {
        if (in[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int pre[], int in[], int start, int end)
{
    // as we don't want it to disaapear after iterations
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = pre[idx];
    idx++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(in, start, end, curr);
    node->left = buildTree(pre, in, start, pos - 1);
    node->right = buildTree(pre, in, pos + 1, end);

    return node;
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    // make a tree from preorder and inorder traversals of a tree

    /* in preorder : first element is the main root */
    /* hence all the elments before root is left subTree in inorder
    and all the elements after root is right subTree in inorder */

    int pre[] = {1, 2, 4, 3, 5};
    int in[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(pre, in, 0, 4);
    inorder(root);

    return 0;
}