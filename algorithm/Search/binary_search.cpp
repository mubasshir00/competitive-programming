#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int x, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
};
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binary_search(arr, x, n);
    return 0;
}