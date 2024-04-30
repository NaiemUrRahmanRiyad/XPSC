#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> pre;
        pre.push_back(0);
        vector<int> preMax;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pre.push_back(pre.back() + x);
            if (i == 0)
            {
                preMax.push_back(x);
            }
            else
            {
                preMax.push_back(max(preMax.back(), x));
            }
        }
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;

            int in = upper_bound(preMax.begin(), preMax.end(), k) - preMax.begin();
            cout << pre[in] << " ";
        }
        cout << endl;
    }

    return 0;
}
