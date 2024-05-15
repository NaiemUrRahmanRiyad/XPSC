#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y;
    cin >> x >> y;
    int ans = 2 * x + 2 * y;
    if (ans >= 1000)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}