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
        map<int, int> mp, res;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }

        for (auto it : mp)
        {
            int a = it.first;
            int cnt = it.second;
            while (a <= n)
            {
                res[a] += cnt;
                a += it.first;
            }
        }

        int mx_frogs = 0;
        for (auto it : res)
        {
            mx_frogs = max(mx_frogs, it.second);
        }

        cout << mx_frogs << endl;
    }
    return 0;
}
