#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> mp;

    int arr[] = {9, 4, 6, 4, 7, 6, 1, 1, 1, 1};
    int n = 10;

    for (int i{0}; i < n; i++)
        mp[arr[i]]++;

    for (auto i : mp)
        cout << i.first << " : " << i.second << endl;

    return 0;
}