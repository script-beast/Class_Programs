#include <bits/stdc++.h>
using namespace std;

// Factorial
// int re(int a)
// {
//     if (a <= 0)
//         return 1;

//     // res = res * a;

//     return re(a - 1) * a;
// }

// Fibonacci Number
// int fibon(int a)
// {
//     if (a == 1 || a == 0)
//         return a;

//     int res = fibon(a - 1) + fibon(a - 2);

//     return res;
// }

//
void print(int a)
{
    if (a == 0)
        return;

    print(a - 1);
    cout << a << " ";
}

int main()
{
    // int a = 1;
    // cout << re(10);

    // 0 1 1 2 3 5 8

    // int a = 0, b = 1;

    // cout << a << " " << b << " ";

    // for (int i = 0; i < 6; i++)
    // {
    //     int c = a + b;
    //     cout << c << " ";

    //     a = b;
    //     b = c;
    // }

    // int first = 0, second = 1;

    // for (int i = 0; i < 6; ++i)
    // {
    //     int next;
    //     cout << first << " ";

    //     next = first + second;
    //     first = second;
    //     second = next;
    // }

    // cout << fibon(16);

    // for (int i = 1; i <= 20; i++)
    //     cout << i;

    print(40);
}