#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    // for (int i = 0; i < 5; i++)
    //     cout << n - i - 1 << " -> " << arr[n - i - 1] << endl;

    // max element

    // int max = INT_MIN;

    // for (int i = 0; i < 5; i++)
    //     if (max < arr[i])
    //         max = arr[i];

    // cout << max;

    int min = arr[0];

    for (int i = 0; i < 5; i++)
        if (min > arr[i])
            min = arr[i];

    cout << min;
}

