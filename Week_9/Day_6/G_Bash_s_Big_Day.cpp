#include <bits/stdc++.h>
#define ll long long
const ll M = 2e5 + 5;
using namespace std;

void sol()
{
    ll n, x, i, j;
    cin >> n;
    vector<ll> a(M);
    vector<bool> b(M, true);
    while (n--)
    {
        cin >> x;
        a[x]++;
    }
    ll ans = 1;
    for (ll i = 2; i < M; i++)
    {
        if (b[i])
        {
            ll c = 0;
            for (ll j = i; j < M; j += i)
            {
                b[j] = false;
                c += a[j];
            }
            ans = max(ans, c);
        }
    }
    cout << ans << endl;
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