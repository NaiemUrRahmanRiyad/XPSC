#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1000005;
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        if (i + 1 < n)
            m = max(m, abs(a[i + 1] - a[i]));
        if (i - 1 >= 0)
            m = max(m, abs(a[i - 1] - a[i]));
        ans = min(ans, m);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}