#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int tmp = -1;
        while (n--)
        {
            int x;
            cin >> x;
            if ((x & b) == b)
            {
                tmp = tmp & x;
            }
        }
        if (tmp == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}