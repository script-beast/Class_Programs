#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp.insert({"Hi", 1});

    cout << mp.at("Hi") << endl;

    mp["Hello"] = 10;

    cout << mp["Hello"] << endl;

    cout << mp.size() << endl;

    for (auto i : mp)
    {
        cout << "Key : " << i.first << endl;
        cout << "Value : " << i.second << endl;
    }

    return 0;
}
