#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    for (int i = 0; i < (n / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES"<<endl;
            return;
        }
    }

    cout << "NO"<<endl;
}

int main()
{
    long int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}