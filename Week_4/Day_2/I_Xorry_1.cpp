#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans, cnt = 0;
        ans = x;

        while (ans > 1)
        {
            ans = ans /2;
            cnt++;
        }

        int tmp = pow(2, cnt);
        cout << x -tmp << " " << tmp << endl;
    }
}