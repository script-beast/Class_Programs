#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class mystack
{
private:
    node *head = NULL;

public:
    void push(int x)
    {
        node *newnode = new node;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }

    void pop()
    {
        node *del = head;
        head = head->next;
        delete del;
    }

    int top()
    {
        return head->data;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{

    mystack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(15);

    cout << s.top() << endl;

    s.pop();
    s.pop();
    s.pop();
    cout << s.isEmpty() << endl;

    cout << s.top() << endl;

    s.pop();
    s.pop();

    cout << s.isEmpty();
}