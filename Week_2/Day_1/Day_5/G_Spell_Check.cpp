#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;

        set<char> chars;

        for (char c : s)
            chars.insert(c);

        for (char c : {'T', 'i', 'm', 'u', 'r'})
        {
            if (chars.count(c) == 1)
                ans++;
        }

        if (ans == 5 && n == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
