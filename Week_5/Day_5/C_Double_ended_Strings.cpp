#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        vector<vector<long>> dp(a.size() + 1, vector<long>(b.size() + 1, 0));

        long mx = 0;

        for (long i = 1; i <= a.size(); i++)
        {
            for (long j = 1; j <= b.size(); j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    mx = max(mx, dp[i][j]);
                }
            }
        }

        long ans = a.size() + b.size() - 2 * mx;

        cout << ans << endl;
    }
    return 0;
}
