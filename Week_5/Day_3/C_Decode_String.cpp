#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i < 2 or s[i] != '0')
        {
            ans += (s[i] - '0' - 1 + 'a');
        }
        else
        {
            string x;
            x += s[i - 2];
            x += s[i - 1];
            int y = stoi(x);
            i -= 2;
            ans += ('a' + y - 1);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}