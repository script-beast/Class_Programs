#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> mp;

    int arr[] = {9, 4, 6, 4, 7, 6, 1, 1, 1, 1};
    int n = 10;

    for (int i{0}; i < n; i++)
        mp.insert(arr[i]);

    for (auto i : mp)
        cout << i << " ";
    return 0;
}