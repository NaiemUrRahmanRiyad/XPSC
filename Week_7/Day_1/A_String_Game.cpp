#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0, zero = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        else
            zero++;
    }

    ll res = min(one, zero);

    if (res % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}