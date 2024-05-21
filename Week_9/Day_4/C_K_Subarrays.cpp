#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int x;
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        g = gcd(g, x);
        a.push_back(x);
    }

    x = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        x = gcd(x, a[i]);
        if (x == g)
        {
            count++;
            x = 0;
        }
    }
    if (count >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
