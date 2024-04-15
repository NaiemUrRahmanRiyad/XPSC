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
        int n;
        cin >> n;
        int ans = 1;
        while (ans <= n)
        {
            ans <<= 1;
        }
        cout << (ans >> 1) - 1 << endl;
    }
    return 0;
}
