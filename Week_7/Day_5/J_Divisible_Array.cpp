#include <bits/stdc++.h>
using namespace std;

int main()
{

    long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x = (n * (n + 1)) / 2 - 1;
        cout << n - x % n << " ";
        for (long long i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
