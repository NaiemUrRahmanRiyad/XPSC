#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l = 1, ans = 0;
    map<int, int> m;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (m[k])
        {
            ans = max(ans, i - l);
            l = max(l, m[k] + 1);
            m[k] = i;
        }
        else
        {
            ans = max(ans, i - l + 1);
            m[k] = i;
        }
    }

    ans = max(n - l + 1, ans);
    cout << ans << endl;

    return 0;
}