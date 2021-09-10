#include <bits/stdc++.h>
using namespace std;

void algorithm(int arr[])
{
    int t, n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; i++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int arr[] = {83, 1, 45, 95, 45, 52, 11, 47, 0, 45, 67, 82};
    algorithm(arr);
    return 0
}
