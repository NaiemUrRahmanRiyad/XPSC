#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        bool count = false;
        for (char c : s)
        {
            if (c == ch)
            {
                count = true;
                break;
            }
        }
        if (!count)
        {
            cout << ch << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}