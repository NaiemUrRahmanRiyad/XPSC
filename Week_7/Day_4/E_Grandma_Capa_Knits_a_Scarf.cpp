#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int MinRemovals(char c)
{
    int cnt = 0, l = 0, r = n - 1;

    while (l < r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else if (s[l] == c)
        {
            cnt++;
            l++;
        }
        else if (s[r] == c)
        {
            cnt++;
            r--;
        }
        else
        {
            cnt = INT_MAX;
            break;
        }
    }

    return cnt;
}

void solve()
{

    cin >> n >> s;

    int ans = INT_MAX;

    for (int i = 0; i <= 26; i++)
    {
        ans = min(ans, MinRemovals('a' + i));
    }

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}