#include <bits/stdc++.h>
using namespace std;

void sol(int a, int b)
{
    if (b == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << a << " " << a * b << " " << a * (b + 1) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        sol(a, b);
    }
    return 0;
}
