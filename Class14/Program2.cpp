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
        node *ptr = head;

        if (head == NULL)
        {
            head = new node;
            head->data = x;
            head->next = NULL;
            return;
        }

        while (ptr->next != NULL)
            ptr = ptr->next;

        node *temp = new node;

        temp->data = x;
        temp->next = NULL;

        ptr->next = temp;
    }

    void pop()
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        node *ptr = head;

        while (ptr->next->next != NULL)
            ptr = ptr->next;

        node *del = ptr->next;
        ptr->next = NULL;

        delete del;
    }

    int top()
    {
        node *ptr = head;

        while (ptr->next != NULL)
            ptr = ptr->next;

        return ptr->data;
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