#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        if (str[i] != str[n - i - 1])
            return false;

    return true;
}

// int .

int main()
{
    // string str = "Hey ankit";

    // cin >> str;
    // getline(cin, str);

    // cout << str;

    // length
    // cout << str.length() << endl;

    // find
    // if (str.find("abc") != string::npos)
    //     cout << str.find("abc") << endl;
    // else
    //     cout << "Not Found" << endl;

    // resize
    // str.resize(100);
    // str.resize(5,'h');

    // cout << str;

    // push_back
    // str.push_back('h');
    // cout << str;

    // pop_back
    // str.pop_back();
    // cout << str;

    // clear
    // str.clear();

    // cout << str;

    // strcmp
    // string s1 = "abcd";
    // string s2 = "abcd";

    // char s1[10] = "abc";
    // char s2[10] = "abcd";

    // int res = strcmp(s1, s2);

    // cout << res;

    // strcpy
    // char a1[10] = "abcd";
    // char a2[10];

    // strcpy(a2, a1);

    // cout << a1 << endl;
    // cout << a2;

    // strcat
    // char a1[10] = "Hey";
    // char a2[10] = " boy";

    // cout << a1 << " " << a2 << endl;

    // strcat(a1, a2);

    // cout << a1 << " " << a2 << endl;

    // substr
    // string s = "Hello World!";

    // // string res = s.substr(4,6);
    // string res = s.substr(6);
    // cout << res << endl;

    // string fname, lname;

    // cin >> fname;
    // cin >> lname;

    // // string fullName = fname + " " + lname;
    // // cout << fullName;

    // fname.append(" ");
    // fname.append(lname);

    // cout << fname;

    // abc - a , b, c , ab ,bc, abc

    // string str = "abcd";

    // for (int i = 0; i < str.length(); i++)
    //     for (int j = 1; j <= str.length() - i ; j++)
    //         cout << str.substr(i, j) << " ";

    // a ab abc abcd b bc bcd c cd d

    // count no. of words

    // string str = "dgdfg";
    // int count = 0;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == ' ')
    //         count++;
    // }

    // if (str.length())
    //     count++;

    // cout << count;

    string str = "abc";

    int n = str.length();

    for (int i = n - 1; i >= 0; i--)
        str.push_back(str[i]);

    cout << str;

    return 0;
}

// int main()
// {
//     string str;
//     cout << "Enter the string: ";
//     getline(cin, str);
//     cout << str;
//     cout << endl;

//     int count = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//             count++;
//     }
//     if (str.length())
//     {
//         count++;
//     }
//     cout << count;
//     return 0;
// }