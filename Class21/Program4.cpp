#include <bits/stdc++.h>
using namespace std;

// Binary Tree

struct node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

/*
Pre-order -  Root Left Right
In-order -   Left Root Right
Post-order - Left Right Root
*/

void preorderTravesal(node *root, vector<int> &ans)
{
    if (root == NULL)
        return;

    // cout << root->data << " ";
    ans.push_back(root->data);
    preorderTravesal(root->left, ans);
    preorderTravesal(root->right, ans);
}

void inorderTraversal(node *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{

    node *root = new node(1);
    node *left = new node(2);
    node *right = new node(3);

    root->left = left;
    root->right = right;

    node *no4 = new node(4);
    node *no5 = new node(5);
    node *no6 = new node(6);

    left->left = no4;
    right->left = no5;
    right->right = no6;

    vector<int> preorder;

    cout << "Pre Order Traversal : ";
    preorderTravesal(root, preorder);
    for (auto i : preorder)
        cout << i << " ";
    cout << endl;

    cout << "In Order Traversal : ";
    inorderTraversal(root);
    cout << endl;

    cout << "Post Order Traversal : ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}