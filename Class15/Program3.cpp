#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class myqueue
{
private:
    node *head = NULL, *rear = NULL;

public:
    void push(int x)
    {
        node *n = new node();
        n->data = x;
        n->next = NULL;

        if (head == NULL) head = n;
        else rear->next = n;
        rear = n;
    }

    void pop()
    {
        node *del = head;
        head = head->next;
        delete del;
    }

    int front()
    {
        return head->data;
    }

    bool isempty()
    {
        return (head == NULL);
    }
};

int main()
{
    myqueue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl;
    cout << q.isempty() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << q.front() << endl;
    cout << q.isempty() << endl;

    q.pop();
    q.pop();

    cout << q.isempty() << endl;

    q.pop();

    cout << "HI";

    return 0;
}
