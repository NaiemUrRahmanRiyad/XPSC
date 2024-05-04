#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<int> cnt(2, 0);

    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - '0']++;
    }

    for (int i = 0; i < n; i++)
    {
        int x = (s[i] - '0') ^ 1;
        if (cnt[x] == 0)
        {
            cout << n - i << endl;
            return;
        }
        cnt[x]--;
    }
    cout << 0 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }
}
