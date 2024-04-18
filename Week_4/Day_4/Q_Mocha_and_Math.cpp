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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = -1;
        for (int i = 0; i < n; i++)
        {
            cnt = a[i] & cnt;
        }

        cout << cnt << endl;
    }
    return 0;
}