#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int Xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Xor = Xor ^ a[i];
        }
        int ans = Xor;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, Xor ^ a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
