#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans | a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
