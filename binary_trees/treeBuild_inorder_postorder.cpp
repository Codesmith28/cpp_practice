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

Node *buildTree(int post[], int in[], int start, int end)
{
    // as we don't want it to disaapear after iterations
    static int idx = 4; // n-1
    if (start > end)
    {
        return NULL;
    }

    int val = post[idx];
    idx--;

    Node *curr = new Node(val);
    if (start == end)
    {
        return curr;
    }

    int pos = search(in, start, end, val);
    curr->right = buildTree(post, in, pos + 1, end);
    curr->left = buildTree(post, in, start, pos - 1);

    return curr;
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

    /* in postorder : last element is the main root */
    /* hence all the elments before root is left subTree in inorder
    and all the elements after root is right subTree in inorder */

    int in[] = {4, 2, 1, 5, 3};
    int post[] = {4, 2, 5, 3, 1};

    Node *root = buildTree(post, in, 0, 4);
    inorder(root);

    return 0;
}