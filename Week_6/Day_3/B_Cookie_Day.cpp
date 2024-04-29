#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        vector<int> arr(n);
        int res = 1000000005;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] >= k)
            {
                res = min(res, arr[i] % k);
            }
        }
        if (res == 1000000005)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}