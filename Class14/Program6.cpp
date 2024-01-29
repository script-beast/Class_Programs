#include <bits/stdc++.h>
using namespace std;

bool validBracket(string s, int n)
{
    stack<int> stk;

    for (int i{0}; i < n; i++)
    {
        if (s[i] == '(')
            stk.push(s[i]);
        else
        {
            if (stk.empty())
                return false;
            else if (stk.top() == '(')
                stk.pop();
            else
                return false;
        }
    }

    return stk.empty();
}

int main()
{
    string s = "((()))(";
    int n = s.length();

    cout << validBracket(s, n);
}