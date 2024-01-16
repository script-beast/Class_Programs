#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int key, int n)
{
    // for (int i = 0; i < n; i++)
    //     if (key == arr[i])
    //         return i;

    int high = n - 1, low = 0;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[10] = {15, 57, 69, 30, 73, 24, 99, 20, 27, 44};
    int n = 10;

    // for (int j = 0; j < n; j++)
    //     cout << arr[j] << " " << j << endl;
    // cout << endl;

    int index = -1;
    int key = 57;

    // Linear Search
    // for (int i = 0; i < n; i++)
    // {
    //     if (key == arr[i])
    //     {
    //         index = i;
    //         break;
    //     }
    // }
    // cout << find(arr, key, n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > curr)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }

    cout << "Did Sorting" << endl;
    for (int j = 0; j < n; j++)
        cout << arr[j] << " " << j << endl;
    cout << endl;
    // Binary Search
    // int high = n - 1, low = 0;
    // while (high >= low)
    // {
    //     int mid = low + (high - low) / 2; // 4 //
    //     // cout << high << " " << low << " " << mid << endl;
    //     if (arr[mid] == key)
    //     {
    //         index = mid;
    //         break;
    //     }
    //     else if (arr[mid] < key)
    //         low = mid + 1;
    //     else
    //         high = mid - 1;
    // }
    // cout << index;

    cout << find(arr, key, n);
}   