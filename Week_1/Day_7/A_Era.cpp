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
        int maxEle = 0;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x - i > maxEle)
            {
                maxEle = x - i;
            }
        }
        cout << maxEle << endl;
    }

    return 0;
}