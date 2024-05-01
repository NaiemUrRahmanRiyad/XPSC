#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int X;
        cin >> X;
        int result = 100 - X;
        result /= 10;
        cout << result * 10 << endl;
    }
    return 0;
}