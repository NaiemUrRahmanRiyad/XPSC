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
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[__lg(x)]++;
        }
        long long ans = 0;
        for (auto [x, y] : a)
        {
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}