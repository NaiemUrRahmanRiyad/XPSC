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
        vector<int> a(n + 2);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ind = -1;
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                ind = i;
                break;
            }
        }

        if (ind == -1)
            cout << "NO\n";
        else
            cout << "YES\n"
                 << ind - 1 << " " << ind << " " << ind + 1 << "\n";
    }
    return 0;
}
