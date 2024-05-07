#include <bits/stdc++.h>
using namespace std;
int main()
{

    long int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        vector<long> a;
        set<long> s;
        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            if ((x <= n) && (!s.count(x)))
            {
                s.insert(x);
            }
            else
            {
                a.push_back(x);
            }
        }

        sort(a.begin(), a.end());

        long cnt = a.size();
        int ind = 0;
        for (long i = 1; i <= n; i++)
        {
            if (s.count(i))
            {
                continue;
            }
            if (a[ind] <= 2 * i)
            {
                cnt = -1;
                break;
            }
            ind++;
        }

        cout << cnt << endl;
    }
}
