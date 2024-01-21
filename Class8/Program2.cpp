#include <bits/stdc++.h>
using namespace std;

// Friend

class abcd
{
private:
    int a;
    int b;

public:
    void print()
    {
        cout << a << " " << b << endl;
    }

    friend int multiply(abcd, abcd);

    void set(int i, int j)
    {
        a = i;
        b = j;
    }

    int sum()
    {
        return a + b;
    }
};

int multiply(abcd xy, abcd y)
{
    return xy.a * xy.b + y.a * y.b;
}

int main()
{

    abcd ab;

    ab.set(10, 50);

    abcd cd;
    cd.set(30, 70);

    cout << multiply(ab, cd);
    // cout << multiply(cd);
    return 0;
}
