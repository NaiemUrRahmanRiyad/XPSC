#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        int mx = 0;
        for (auto i : m)
        {
            mx = max(mx, i.second);
        }
        int ans = 0;
        while (mx < n)
        {
            int r = n - mx;
            int p = mx;
            ans++;
            ans += min(p, r);
            mx += min(p, r);
        }
        cout << ans << endl;
    }
    return 0;
}
