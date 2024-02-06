#include <bits/stdc++.h>
using namespace std;

// Ternary Tree

struct node
{
    int data;
    node *left;
    node *mid;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        mid = NULL;
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

    if (search(root->mid, key))
        return true;

    if (search(root->right, key))
        return true;

    return false;
}

void traversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    traversal(root->left);
    traversal(root->mid);
    traversal(root->right);
}

int main()
{
    node *root = new node(1);
    node *no2 = new node(2);
    node *no3 = new node(3);
    node *no4 = new node(4);
    node *no5 = new node(5);
    node *no6 = new node(6);
    node *no7 = new node(7);
    node *no8 = new node(8);
    node *no9 = new node(9);

    root->left = no2;
    root->mid = no3;
    root->right = no4;

    no2->left = no5;

    no3->left = no6;
    no3->right = no7;

    no5->mid = no8;

    no4->mid = no9;

    cout << "Traversal : ";
    traversal(root);
    cout << endl;

    cout << search(root, 167678);

    return 0;
}

/*

                        1
                     /  |  \
                    2   3   4
                   /   / \  |
                  5   6   7 9
                  |
                  8
*/