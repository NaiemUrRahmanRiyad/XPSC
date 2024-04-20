#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int l, int r, int key)
{
    int mid = (l + r) / 2;
    if (l > r)
        return false;
    if (arr[mid] == key)
        return true;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, r, key);
    else
        return binarySearch(arr, l, mid - 1, key);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        int ans;
        cin >> ans;
        if (binarySearch(arr, 0, n - 1, ans))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}