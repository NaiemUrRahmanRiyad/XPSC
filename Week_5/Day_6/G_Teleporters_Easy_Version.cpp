#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());

        int cnt = 0;
        for (long int i = 0; i < n;i++)
            if (a[i] <= c)
            {
                cnt++;
                c -= a[i];
            }
        cout << cnt << endl;
    }
    return 0;
}