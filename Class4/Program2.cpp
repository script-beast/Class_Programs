#include <bits/stdc++.h>
using namespace std;

// int fun(int a, int b)
// {
//     return a + b;
// }

// int mul(int a, int b, int c)
// {
//     return (a * b * c) / 100;
// }

// void fun(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;

//     cout << "Inside : " << endl;

//     cout << *a << "  " << *b << endl;
// }

// int sum(int a, float b)
// {
//     cout << "fun 1" << endl;
//     return a + b;
// }

// int sum(int a, int b)
// {
//     cout << "fun 2" << endl;
//     return a + b;
// }

// primeter - circle, rectangle , triangle

// double peri(int r)
// {
//     return 2 * 3.14 * r;
// }

// double peri(int l, int b)
// {
//     return 2 * (l + b);
// }

// double peri(int s1, int s2, int s3)
// {
//     return s1 + s2 + s3;
// }

bool isEven(int a)
{
    return !(a % 2);
}

int main()
{

    // fun(10, 'U');
    // int x, y, z;
    // cin >> x >> y >> z;
    // int a = mul(x, y, z);
    // cout << a << endl;
    // cout << fun();
    // int ab = 10;
    // int b = fun(ab);
    // cout << ab << endl;
    // cout << b << endl;
    // int a = 10, b = 20;
    // fun(&a, &b);
    // cout << "Outside" << endl;
    // cout << a << "  " << b;

    // int a = 10;
    // float b = 100.6;
    // double per = peri(5,6,7);

    // cout << per;

    bool a = isEven(11);

    cout << a;

    return 0;
}
