#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> k >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            a[i] = k - x;
        }

        sort(a.begin(), a.end());

        long int cnt = 0, rem = k;
        for (long i = 0; (rem > 0) && (i < a.size()); i++)
        {
            rem -= a[i];
            cnt += (rem > 0);
        }
        cout << cnt << endl;
    }
    return 0;
}