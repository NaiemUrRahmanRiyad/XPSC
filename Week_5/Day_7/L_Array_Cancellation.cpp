#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);

        ll res = 0, cnt = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            scanf("%lld", &x);
            if (x > 0)
            {
                res += x;
            }
            else if (x < 0)
            {
                if (x + res > 0)
                {
                    res += x;
                }
                else
                {
                    x += res;
                    cnt -= x;
                    res = 0;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}