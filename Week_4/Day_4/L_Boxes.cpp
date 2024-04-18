#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0, i = 0, j = n - 1;
        sort(a.rbegin(), a.rend());

        ll Xor = a[0];
        while (i < j)
        {
            if (Xor >= a[j])
            {
                Xor = (Xor ^ a[j]);
                j--;
            }
            else
            {
                ans++;
                Xor = a[i];
                i++;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}