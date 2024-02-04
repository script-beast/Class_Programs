#include <bits/stdc++.h>
using namespace std;

class mystack
{
private:
    int arr[10];
    int idx = -1;

public:
    void push(int i)
    {
        if (idx == 9)
            return;
        arr[++idx] = i;
    }

    void pop()
    {
        if (idx == -1)
            return;
        arr[idx] = 0;
        --idx;
    }

    int top()
    {
        if (idx == -1)
            return 0;
        return arr[idx];
    }

    bool isEmpty()
    {
        return idx == -1;
    }
};

int main()
{
    mystack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

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