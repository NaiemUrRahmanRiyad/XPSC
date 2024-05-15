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
        string a;
        cin >> a;
        int cnt = 0;
        int j = 0;

        while (j < n - 1)
        {
            if (a[j] == a[j + 1])
            {
                j += 2;
                cnt++;
            }
            else
            {
                j++;
            }
        }

        cout << n - cnt << endl;
    }

    return 0;
}
