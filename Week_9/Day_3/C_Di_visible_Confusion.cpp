#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0, flag = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] % (i + 2) != 0)
            {
                res++;
                continue;
            }
            int a = res, j, x = 0;
            for (j = 0; j < a; j++)
            {
                x++;
                if (v[i] % (i + 2 - x) != 0)
                {
                    res++;
                    break;
                }
            }
            if (j == a)
                flag = 0;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}