#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindrome;

void palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool ans = true;

        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            all_palindrome.push_back(i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(maxN), a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
        a.push_back(x);
    }

    long long ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < all_palindrome.size(); j++)
        {
            int curr = (a[i] ^ all_palindrome[j]);
            ans += cnt[curr];
        }
    }
    cout << ans / 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    palindrome();

    while (t--)
    {
        solve();
    }
    return 0;
}