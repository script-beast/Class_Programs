#include <bits/stdc++.h>
using namespace std;

class myqueue
{
    int arr[10];
    int fron = -1, rear = -1;

public:
    void push(int x)
    {
        if (rear == -1 && fron == -1)
        {
            fron = 0;
            rear = 0;
            arr[rear] = x;
            return;
        }
        arr[++rear] = x;
    }

    void pop()
    {
        arr[fron] = 0;
        fron++;

        if (fron > rear)
            fron = -1, rear = -1;
    }

    int front()
    {
        return arr[fron];
    }

    bool isempty()
    {
        return (fron == -1);
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

    return 0;
}
