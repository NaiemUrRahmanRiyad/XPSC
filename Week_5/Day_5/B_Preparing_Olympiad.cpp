#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> diff(n);
    for (int i = 0; i < n; i++)
    {
        cin >> diff[i];
    }
    sort(diff.begin(), diff.end());

    int ans = 0;
    for (int mask = 1; mask < (1 << n); mask++)
    {
        int sub_sum = 0;
        int min_diff = INT_MAX;
        int max_diff = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sub_sum += diff[i];
                min_diff = min(min_diff, diff[i]);
                max_diff = max(max_diff, diff[i]);
            }
        }
        if (l <= sub_sum && sub_sum <= r && max_diff - min_diff >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
