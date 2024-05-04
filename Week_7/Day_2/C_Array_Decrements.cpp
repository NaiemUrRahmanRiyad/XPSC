#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int o = 0;
        bool ans = true;
        cin >> n;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            o = max(o, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - o < b[i] && b[i] != 0)
                ans = false;
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}