#include <iostream>
using namespace std;

int main()
{
    int i;

    cin >> i;

    int a = 100;

    if (i < 10)
        a /= 2;
    else
        a *= 2;

    cout << a;
}