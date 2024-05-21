#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, m;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

      ll  int ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ans = ans + max(abs(a[i] - 1), abs(m - a[i]));
        }

        cout << ans << endl;
    }
}