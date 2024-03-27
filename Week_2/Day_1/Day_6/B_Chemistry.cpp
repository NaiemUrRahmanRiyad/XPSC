#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;
        vector<int> freq(26);
        for (char ch : str)
        {
            freq[ch - 'a']++;
        }
        int odd = 0;
        for (int f : freq)
        {
            if (f % 2 == 1)
            {
                odd++;
            }
        }
        int diff = odd - k;
        if (diff <= 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
