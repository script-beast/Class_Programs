#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    int *add;

    add = &a;

    cout << a << endl;

    cout << add << endl;

    cout << *add << endl;

    a = 12;

    cout << " New data" << endl;

    cout << a << endl;

    cout << add << endl;

    cout << *add << endl;

    return 0;
}