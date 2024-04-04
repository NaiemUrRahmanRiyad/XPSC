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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0, cnt = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && flag)
            {
                cnt++;
                flag = false;
            }
            else if (a[i] > 0)
            {
                flag = true;
            }
            sum += abs(a[i]);
        }

        cout << sum << " " << cnt << endl;
    }

    return 0;
}
