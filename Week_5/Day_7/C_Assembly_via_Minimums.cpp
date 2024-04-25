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

        int z = n * (n - 1) / 2;
        vector<int> a(z);

        for (int i = 0; i < z; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<int> ans;

        int x = n - 1;
        for (int i = 0; i < z; i++)
        {
            int val = a[i];
            int count = 1;
            while (i + 1 < z && a[i + 1] == a[i])
            {
                count++;
                i++;
            }
            while (count > 0)
            {
                ans.push_back(val);
                count -= x;
                x--;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << ans[ans.size() - 1];
        cout << endl;
    }

    return 0;
}