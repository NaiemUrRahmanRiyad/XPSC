#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    for (int x = 0; x * a <= c; x++)
    {
        if ((c - x * a) % b == 0)
        {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}
