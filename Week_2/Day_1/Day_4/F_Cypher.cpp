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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            int len;
            string s;
            cin >> len;
            cin >> s;
            for (int j = 0; j < len; j++)
            {
                if (s[j] == 'D')
                {
                    a[i]++;
                    if (a[i] == 10)
                        a[i] = 0;
                }

                else
                {
                    a[i]--;
                    if (a[i] == -1)
                        a[i] = 9;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
