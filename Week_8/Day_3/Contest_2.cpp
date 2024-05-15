

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int mon = n;
        for (int i = 0; i < k; i++)
        {
            mon = max(mon * 2, mon + 1000);
        }
        cout << mon << endl;
    }
}
