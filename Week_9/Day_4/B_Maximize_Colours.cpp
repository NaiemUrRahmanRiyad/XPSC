
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);
        int ans = 0;

        while (a[1] > 0 && a[2] > 0)
        {
            ans++;
            a[1]--;
            a[2]--;
        }

        if (a[0] > 0)
        {
            ans += min(a[0], 2);
        }

        cout << ans << endl;
    }

    return 0;
}
