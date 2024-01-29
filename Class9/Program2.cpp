#include <bits/stdc++.h>
using namespace std;

class abc
{
private:
    int a, b, c;

public:
    void setabc(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }

    int geta()
    {
        return a;
    }

    int getb()
    {
        return b;
    }

    int getc()
    {
        return c;
    }
};

class xyz : private abc
{
private:
    int x, y, z;

public:
    void setxyz(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    int getz()
    {
        return z;
    }
};

class mno : public xyz
{
private:
    int m, n, o;

public:
    void setmno(int i, int j, int k)
    {
        m = i;
        n = j;
        o = k;
    }

    int getm()
    {
        return m;
    }

    int getn()
    {
        return n;
    }
    int geto()
    {
        return o;
    }
};

int main()
{
    mno m1;

    m1.setmno(10, 20, 30);

    cout << m1.getm();
    cout << m1.getx();
    // cout << m1.geta();

    xyz x1;

    x1.setxyz(1, 2, 3);

    cout << x1.getx();
    // cout << x1.geta();

    return 0;
}