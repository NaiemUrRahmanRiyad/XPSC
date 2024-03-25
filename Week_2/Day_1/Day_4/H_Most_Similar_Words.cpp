#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int dis, sum, ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = 0;
                for (int k = 0; k < m; k++)
                {
                    dis = abs(s[i][k] - s[j][k]);
                    sum += dis;
                }
                if (sum < ans)
                {
                    ans = sum;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}