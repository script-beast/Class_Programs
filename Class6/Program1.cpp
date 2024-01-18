#include <bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] < arr[i])
//             return false;
//     }
//     return true;
// }

// bool isPalindrome(int arr[], int n)
// {
//     for (int i = 0; i < n/2; i++)
//         if (arr[i] != arr[n - i - 1])
//             return false;
//     return true;
// }

void shiftArry(int arr[], int n)
{
    int cur = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = cur;
}

int main()
{
    int arr[10] = {4, 1, 5, 6, 3, 7, 2, 9, 0, 2};
    int n = 10;

    // 5 3 2 1 6  8 99 87 7 9
    // 9 7 87 99 8  8 99 87 7 9

    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         if (arr[i] < arr[i + 1])
    //         {
    //             int temp;
    //             temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //         }
    //     }
    // }

    // cout << isSorted(arr, n);

    // Reverse of Array using 2 array
    // int arr2[10];
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     arr2[i] = arr[n - i - 1];
    // }
    //     for (int i = 0; i < n; i++)
    //     cout << arr2[i] << " ";
    // cout << endl;

    // cout << isPalindrome(arr, 10);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    shiftArry(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

// void rev(int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }

// 1 2 3 4 5 | 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {5, 3, 2, 1, 6, 8, 99, 87, 7, 9};
//     int n = 10;

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     rev(arr, n);

//     cout << n << endl;

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     cout << endl;
//     return 0;
// }