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

    void greet()
    {
        cout << "abc";
    }

    int getc()
    {
        return c;
    }
};

class xyz
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

    void greet()
    {
        cout << "xyz";
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

class mno : public xyz, public abc
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

    // m1.greet();
    
    m1.xyz::greet();
    m1.abc::greet();

    return 0;
}