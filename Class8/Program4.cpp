#include <bits/stdc++.h>
using namespace std;

// Friend

class number
{
private:
    int a;
    int b;

public:
    static int sta;
    void set(int i, int j)
    {
        a = i;
        b = j;
    }

    static int printsta()
    {
        cout << sta;
    }
};

int number::sta = 10;

int main()
{
    number n1;
    n1.set(50, 20);

    cout << number::sta << endl;
    n1.printsta();

    return 0;
}
