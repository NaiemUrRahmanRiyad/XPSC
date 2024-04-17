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
        bool valid = true;
        int first_last = a[0];
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] < first_last)
            {
                valid = false;
                break;
            }
        }
        if (valid && a[0] == a[n - 1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
