#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int a = 10;

    // int *add;

    // add = &a;

    // cout << a << endl;

    // cout << add << endl;

    // cout << *add << endl;

    // *add = 12;

    // cout << "New Data :" << endl;

    // cout << a << endl;

    // cout << add << endl;

    // cout << *add << endl;

    int a1 = 10, a2 = 12;

    int sum = 0;

    int *add1 = &a1, *add2 = &a2;

    sum = *add1 + *add2;

    cout << sum;

    return 0;
}