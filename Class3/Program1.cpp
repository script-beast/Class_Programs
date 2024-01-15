#include <iostream>
using namespace std;

int a = 20;

int main()
{
    int a = 10;

    if (a == 10)
    {
        int a = 5;
        cout << a << "   ";
    }

    cout << ::a;
    
}
