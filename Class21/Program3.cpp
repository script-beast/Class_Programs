#include <bits/stdc++.h>
using namespace std;

// n-ary Tree

struct node
{
    int data;
    vector<node *> children;

    node(int d)
    {
        data = d;
    }
};

void traversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    for (auto child : root->children)
        traversal(child);
}

bool search(node *root, int key)
{
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    for (auto child : root->children)
    {
        if (search(child, key))
            return true;
    }

    return false;
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
    node *no10 = new node(10);
    node *no11 = new node(11);
    node *no12 = new node(12);
    node *no13 = new node(13);
    node *no14 = new node(14);
    node *no15 = new node(15);
    node *no16 = new node(16);
    node *no17 = new node(17);
    node *no18 = new node(18);
    node *no19 = new node(19);

    root->children.push_back(no2);
    root->children.push_back(no3);
    root->children.push_back(no4);
    root->children.push_back(no5);
    root->children.push_back(no6);

    no2->children.push_back(no7);
    no2->children.push_back(no8);
    no2->children.push_back(no9);

    no4->children.push_back(no10);
    no5->children.push_back(no11);

    no7->children.push_back(no12);
    no7->children.push_back(no13);

    no10->children.push_back(no14);
    no10->children.push_back(no15);
    no10->children.push_back(no16);

    cout << "Traversal : ";
    traversal(root);
    cout << endl;

    cout << search(root, 1);
}
