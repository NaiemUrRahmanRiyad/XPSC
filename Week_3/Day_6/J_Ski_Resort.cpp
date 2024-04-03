#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long cnt = 0;
        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    for (long long j = k; j <= cnt; j++)
                    {
                        ans += (cnt - j + 1);
                    }
                }
                cnt = 0;
            }
        }

        if (cnt >= k)
        {
            for (long long j = k; j <= cnt; j++)
            {
                ans += (cnt - j + 1);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
