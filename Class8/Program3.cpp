#include <bits/stdc++.h>
using namespace std;

// Friend

class number
{
private:
    int a;
    int b;

public:
    friend class cal;

    void set(int i, int j)
    {
        a = i;
        b = j;
    }
};

class cal
{

public:
    int sum(number a)
    {
        return a.a + a.b;
    }
    int sub(number a)
    {
        return a.a - a.b;
    }
};

int main()
{
    cal mycal;
    number n1;
    n1.set(50, 20);

    cout << mycal.sum(n1);

    
    return 0;
}
