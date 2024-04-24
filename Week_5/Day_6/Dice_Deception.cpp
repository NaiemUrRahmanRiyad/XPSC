#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n), arr2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < k; i++)
        {

            if (arr[i] < 4)
            {
                arr2.push_back(7 - arr[i]);
            }
            else
            {
                arr2.push_back(arr[i]);
            }
        }

        int ans = 0;
        for (int i = k; i < n; i++)
        {
            arr2.push_back(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += arr2[i];
        }

        cout << ans << endl;
    }
    return 0;
}