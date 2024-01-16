#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 5, 6, 3, 7, 2, 9, 0, 2, 4};
    int n = 10;

    // for (int j = 0; j < n; j++)
    //     cout << arr[j] << " ";
    // cout << endl;

    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    // Bubble Sort :
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

    // Selection Sort :
    // for (int i = 0; i < n; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[minIndex] < arr[j])
    //             minIndex = j;
    //     }
    //     int temp;
    //     temp = arr[i];
    //     arr[i] = arr[minIndex];
    //     arr[minIndex] = temp;
    // }

    // Insertion Sort :
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

    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    cout << endl;
}