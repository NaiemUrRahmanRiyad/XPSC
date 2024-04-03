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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!s.empty())
                {
                    int val = *s.rbegin();
                    ans += val;
                    s.erase(s.find(val));
                }
            }
            else
            {
                s.insert(a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
