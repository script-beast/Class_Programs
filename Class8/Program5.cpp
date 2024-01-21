#include <bits/stdc++.h>
using namespace std;

// Friend

class triangle
{
private:
    int h, b, hy;

public:
    void set(int i, int j)
    {
        h = i;
        b = j;
        hy = sqrt(i * i + j * j);
    }
    void set(int i, int j, int k)
    {
        h = i;
        b = j;
        hy = k;
    }

    float area()
    {
        return (1 * h * b) / 2;
    }

    float piremeter()
    {
        return h + hy + b;
    }

    float calHy()
    {
        return sqrt(b * b + h * h);
    }

};

int main()
{
}
