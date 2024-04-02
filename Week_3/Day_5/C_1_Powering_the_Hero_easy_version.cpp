#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                int max_value = 0;
                int max_index = 0;
                for (int j = 0; j < i; j++)
                {
                    if (a[j] > max_value)
                    {
                        max_value = a[j];
                        max_index = j;
                    }
                }
                ans += max_value;
                a[max_index] = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
