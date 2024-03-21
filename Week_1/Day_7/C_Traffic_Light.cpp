#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s, m;
        cin >> s >> m;
        m += m;
        bool flag = false;
        int count = 0, ans = 0;

        if (s[0] == 'g')
        {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] == 'g')
            {
                ans = max(ans, count);
                flag = false;
            }
            if (m[i] == s[0] && flag == false)
            {
                flag = true;
                count = 0;
            }
            if (flag)
            {
                count++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}