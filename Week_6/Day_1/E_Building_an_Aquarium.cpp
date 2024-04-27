#include <bits/stdc++.h>
using namespace std;

long long findHeight(long long x, vector<long long> &a)
{
    long long n = a.size();
    long long l = 0, r = INT_MAX, h = 0;
    while (r - l > 1)
    {
        long long mid = (l + r) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(mid - a[i], 0ll);
        }
        if (sum > x)
        {
            r = mid;
        }
        else
        {
            l = mid;
            h = mid;
        }
    }
    return h;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long h = findHeight(x, a);
        cout << h << endl;
    }
    return 0;
}
