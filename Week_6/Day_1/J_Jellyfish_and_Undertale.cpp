#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, z, sum = 0, q;
        cin >> x >> y >> z;
        x--;
        while (z--)
        {
            cin >> q;
            if (q > x)
                sum += x;
            else
                sum += q;
        }
        cout << sum + y << endl;
    }
    return 0;
}