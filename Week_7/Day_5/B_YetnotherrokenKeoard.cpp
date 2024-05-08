#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int cnt = 0, ct = 0;

        string res = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
            {
                cnt++;
                continue;
            }
            else if (s[i] == 'B')
            {
                ct++;
                continue;
            }
            else if (islower(s[i]) && cnt > 0)
            {
                cnt--;
                continue;
            }
            else if (isupper(s[i]) && ct > 0)
            {
                ct--;
                continue;
            }
            res += s[i];
        }

        reverse(res.begin(), res.end());

        if (res.size() == 0)
        {
            cout << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
}
