#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if ((n / i) != i)
            {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    ll s = a.size();
    if (s < k)
    {
        cout << -1 << endl;
    }
    else
        cout << a[k - 1] << endl;
    return 0;
}