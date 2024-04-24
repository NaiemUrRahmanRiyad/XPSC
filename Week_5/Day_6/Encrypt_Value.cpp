#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long maxx = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        ll mod = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1 || a[i] == 0 || (mod <= 1 && a[i] > 1))
                mod = (mod + a[i]) % maxx;
            else
                mod = (mod * a[i]) % maxx;
        }
        cout << mod << endl;
    }
    return 0;
}