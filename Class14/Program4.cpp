#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(15);

    cout << s.top() << endl;

    s.pop();
    s.pop();
    s.pop();
    cout << s.empty() << endl;

    cout << s.top() << endl;

    s.pop();
    s.pop();

    cout << s.empty();
}