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

bool search(node *root, int key)
{
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (search(root->left, key))
        return true;

    if (search(root->right, key))
        return true;

    return false;
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

    cout << search(root, 5);

    return 0;
}

/*
             1
            / \
           2   3
          /   / \
         4   5   6

         Pre-order -  Root Left Right - 1 2 4 3 5 6
         In-order -   Left Root Right - 4 2 1 5 3 6
         Post-order - Left Right Root - 4 2 5 6 3 1
*/