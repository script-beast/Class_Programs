#include <bits/stdc++.h>
using namespace std;

// struct phone
// {
//     string name;
//     int ram;
//     float proce;
//     int arr[10];
// };

// union res
// {
//     int ram;
//     char a;
//     float proce;
// };

// enum s
// {
//     ab,
//     bc,
//     cd
// };

typedef struct student
{
    string fname;
    string lname;
    int rno;
};

int main()
{
    // struct phone lava;

    // lava.name = "xyz";
    // lava.ram = 4;
    // lava.proce = 4.7;
    // lava.arr[0] = 100;

    // lava.name.append("gjkdf");

    // cout << lava.name << " ";
    // cout << lava.ram << " ";
    // cout << lava.arr[0] << " ";

    // union res a;

    // a.ram = 98;
    // cout << a.ram << " ";
    // cout << a.a << " ";
    // cout << a.proce << " ";
    // cout << endl;

    // a.a = 'r';
    // cout << a.ram << " ";
    // cout << a.a << " ";
    // cout << a.proce << " ";
    // cout << endl;

    // a.proce = 10.8;
    // cout << a.ram << " ";
    // cout << a.a << " ";
    // cout << a.proce << " ";

    // enum s a = ab;

    // cout << a;

    student list[10];

    for (int i = 0; i < 2; i++)
        cin >> list[i].fname >> list[i].lname >> list[i].rno;

    for (int i = 0; i < 2; i++)
        cout << list[i].fname << " " << list[i].lname << " " << list[i].rno << endl;

    return 0;
}