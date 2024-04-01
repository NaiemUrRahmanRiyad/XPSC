#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    std::cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> dif(n, 0);
        ll sum(0);
        for (ll i = 0; i < n; i++)
        {
            ll cur;
            if (s[i] == 'L')
            {
                cur = i;
            }
            else
            {
                cur = n - i - 1;
            }

            ll mx;
            if (i > (n - i - 1))
            {
                mx = i;
            }
            else
            {
                mx = n - i - 1;
            }
            sum += cur;
            ll diff = mx - cur;
            dif[i] = diff;
        }

        sort(dif.rbegin(), dif.rend());

        for (ll i = 0; i < n; i++)
        {
            sum += dif[i];
            cout << sum << " ";
        }
        cout << endl;
    }
}