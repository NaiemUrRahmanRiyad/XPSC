#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mx = max(mx, a);
        ans += mx - a;
    }
    cout << ans;
}
int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}