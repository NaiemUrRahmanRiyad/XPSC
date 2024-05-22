#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int maxWin = x / 3;
        int maxWinB = y / 3;
        int minDraws = min(x % 3, y % 3);
        cout << minDraws << endl;
    }
}
