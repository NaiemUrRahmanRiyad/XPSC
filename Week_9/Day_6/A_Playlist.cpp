#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> tkt;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        tkt.insert(p);
    }
    vector<ll> c(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    for (ll i = 0; i < m; i++)
    {
        auto ans = tkt.upper_bound(c[i]);
        if (ans == tkt.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            ans--;
            cout << *ans << endl;
            tkt.erase(ans);
        }
    }
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