#include <bits/stdc++.h>
using namespace std;

class abcd
{
private:
    int a;
    int b;

public:
    // int x;
    // string y;

    abcd()
    {
        a = 0;
        b = 0;
    }

    abcd(int i, int j)
    {
        a = i;
        b = j;
    }

    void print()
    {
        cout << a << " " << b << endl;
    }

    void set(int i, int j)
    {
        a = i;
        b = j;
    }

    int sum()
    {
        return a + b;
    }

    int mul(int);

    // int geta()
    // {
    //     return a;
    // }
};

int abcd::mul(int i)
{
    return a * b * i;
}

int main()
{
    // abcd mn(10, 30);
    abcd mn;

    // mn.a = 100;
    // mn.x = 200;
    // mn.y = "Hello";

    // cout << mn.x << endl;
    // cout << mn.y;

    // mn.set(20, 30);

    mn.print();
    // cout << mn.mul(2);

    return 0;
}