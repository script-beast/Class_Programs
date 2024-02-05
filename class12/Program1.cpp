#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};


int main()
{

    node *start , *head;

    start = head;

    head->data = 1;
    head->next = NULL;


    for (int i = 2; i <= 10; i++)
    {
        node *temp = new node;
        temp->data = i;
        temp->next = NULL;

        head->next = temp;
        head = head->next;
    }

    head = start;

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    return 0;
}
