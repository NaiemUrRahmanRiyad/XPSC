#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll x1 = x;
        vector<int> a;
        while (x1 != 0)
        {
            if (x1 % 2 == 0)
            {
                a.push_back(0);
            }
            else
            {
                a.push_back(1);
            }
            x1 = x1 >> 1;
        }
        ll i, y = 0, j = 0;
        for (i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                j++;
            }
            else
            {
                if (j >= 2)
                    y++;
            }
        }
        cout << (1 << y) << endl;
    }
    return 0;
}