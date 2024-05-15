#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int a;
    cin >> a;
    vector<ll> results(a);

    ll first_nine = 45;

    for (int i = 0; i < a; i++)
    {
        ll n;
        cin >> n;

        ll full = n / 9;
        ll remm = n % 9;

        ll r = full * first_nine + (remm * (remm + 1)) / 2;

        results[i] = r;
    }

    for (const auto &res : results)
    {
        cout << res << endl;
    }

    return 0;
}