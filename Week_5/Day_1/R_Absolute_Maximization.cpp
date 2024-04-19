#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Or = 0;
    for (int i = 0; i < n; i++)
    {
        Or = Or | a[i];
    }
    int Ans = -1;
    for (int i = 0; i < n; i++)
    {
        Ans = Ans & a[i];
    }

    cout << Or - Ans << endl;
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