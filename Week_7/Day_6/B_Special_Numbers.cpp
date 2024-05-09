#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        long int res = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                if (i != 0 && str[i - 1] == '0')
                {
                    res += i;
                }
                else
                {
                    if (i > 0 && str[i - 1] == '1')
                    {
                        res += i;
                    }
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}
