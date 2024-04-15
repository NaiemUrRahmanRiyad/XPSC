#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll odd = 0, ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (v[i] % 2 == 1)
                odd++;
        }
        if (odd > 0)
            ans++;

        for (int i = k; i < n; i++)
        {
            if (v[i - k] % 2 == 1)
                odd--;
            if (v[i] % 2 == 1)
                odd++;
            if (odd > 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
