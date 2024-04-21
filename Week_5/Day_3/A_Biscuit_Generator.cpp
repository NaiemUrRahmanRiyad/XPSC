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
        int sum = 0ll;
        int pos = 0ll, neg = 0ll;
        for (auto &i : a)
        {
            cin >> i;
            sum += i;
            if (i > 0)
                pos++;
            else
                neg++;
        }
        if (pos == n)
            cout << sum << endl;
        else
        {
            sort(a.begin(), a.end());
            sum = 0ll;
            for (int i = 1; i < n; ++i)
            {
                if (a[i] + a[i - 1] < 0)
                {
                    a[i] = -a[i];
                    a[i - 1] = -a[i - 1];
                }
            }
            for (auto i : a)
                sum += i;
            cout << sum << endl;
        }
    }
    return 0;
}
