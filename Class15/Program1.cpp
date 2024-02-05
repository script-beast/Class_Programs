#include <bits/stdc++.h>
using namespace std;

class myqueue
{
    int arr[10];
    int idx = -1;

public:
    void push(int x)
    {
        arr[++idx] = x;
    }

    void pop()
    {
        // 1 2 3 4 5
        // 2 3 4 5

        for (int i{0}; i < idx; i++)
            arr[i] = arr[i + 1];

        --idx;
    }

    int front()
    {
        return arr[0];
    }

    bool isempty()
    {
        return idx == -1;
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
