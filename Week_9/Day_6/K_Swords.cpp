#include <bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void sol()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != m)
        {
            b.push_back(m - a[i]);
        }
    }
    m = b[0];
    n = b.size();
    for (ll i = 1; i < n; i++)
    {
        m = gcd(m, b[i]);
    }
    ll ans = 0;
    ll i;
    for (i = 0; i < n; i++)
    {
        ans += (b[i] / m);
    }
    cout << ans << " " << m;
}
int main()
{
    ll t = 1;
    while (t--)
    {
        sol();
    }
    return 0;
}