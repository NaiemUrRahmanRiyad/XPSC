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
        vector<int> a(n);
        map<int, int> m;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            mx = max(mx, a[i]);
        }
        sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]])
            {
                int x = a[i];
                for (int j = x + 1; j <= mx; j++)
                {
                    if (m[j])
                    {
                        m[j]--;
                    }
                    else
                    {
                        break;
                    }
                }
                m[x]--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
