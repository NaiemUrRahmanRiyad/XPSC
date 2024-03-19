
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    long long int sum = 0, x = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sum += arr[i];
        else if (arr[i] % 2 != 0 && x == -1)
            x = arr[i];
        else if (arr[i] % 2 != 0 && x != -1)
            sum += x + arr[i], x = -1;
    }
    cout << sum << endl;

    return 0;
}