#include <bits/stdc++.h>
using namespace std;

// void hello()
// {
//     cout << "I m in function" << endl;
// }

// swap
// int swap(int *a, int *b)
// {
//     int temp;

//     temp = *a;
//     *a = *b;
//     *b = temp;

//     return 0;
// }

// int sum(int a, float b)
// {
//     cout << "Fun 1" << endl;
//     return a + b;
// }

// int sum(float a, int b)
// {
//     cout << "Fun 2" << endl;
//     return a + b;
// }

// int sum(int a, int b, int c)
// {
//     cout << "Fun 3" << endl;
//     return a * b * c;
// }

// bool evenodd(int a)
// {
//     bool res = a % 2;

//     return res;
// }

// bool isPrime(int a)
// {
//     for (int i = 2; i < a; i++)
//         if (a % i == 0)
//             return false;

//     return true;
// }

// primeter
// circle - r
// triangle - s1, s2, s3
// rectange - l,b

// float circle(int r)
// {
//     return 2 * 3.14 * r;
// }

// int triangle(int s1, int s2, int s3)
// {
//     return s1 + s2 + s3;
// }

// int rectangle(int l, int b)
// {
//     return 2 * (l + b);
// }

double primeter(int r)
{
    return 2 * 3.14 * r;
}

double primeter(int s1, int s2, int s3)
{
    return s1 + s2 + s3;
}

double primeter(int l, int b)
{
    return 2 * (l + b);
} 

int main()
{
    // hello();
    int a1 = 10, a2 = 14;

    // cin >> a1;
    // cin >> a2;

    // cout << a1 << "  " << a2 << endl;

    // int a = swap(&a1, &a2);
    // int a = 10.6;
    // float b = 17.6;

    // int res = sum(b, a);

    // cout << a1 << "  " << a2 << endl;
    // cout << res;

    int a = 0;

    cin >> a;

    // bool re = isPrime(a);

    // // if (re)
    // //     cout << "Odd";
    // // else
    // //     cout << "even";

    // cout << (re ? "Prime" : "Not");

    return 0;
}