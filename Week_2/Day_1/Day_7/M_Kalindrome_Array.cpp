#include <bits/stdc++.h>
using namespace std;
bool kalindrome(vector<int> m, int x)
{
    int n = m.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (m[i] == x)
        {
            i++;
        }
        else if (m[j] == x)
        {
            j--;
        }
        else if (m[i] != m[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
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
        bool ans = true;
        for (int i = 0; i < n - 1 - i; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                ans = kalindrome(a, a[i]) || kalindrome(a, a[n - 1 - i]);
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
