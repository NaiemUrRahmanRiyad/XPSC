#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int rev1 = 0;
        int temp1 = a;
        while (temp1 != 0)
        {
            rev1 = rev1 * 10 + temp1 % 10;
            temp1 /= 10;
        }
        int rev2 = 0;
        int temp2 = b;
        while (temp2 != 0)
        {
            rev2 = rev2 * 10 + temp2 % 10;
            temp2 /= 10;
        }
        if (a > b || a > rev2 || rev1 > b || rev1 > rev2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
