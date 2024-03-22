#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int count = 0;
    if (a.length() != b.length())
    {
        return 0;
    }
    for (int i = 0; i < a.length(); i++)
    {

        if (a[i] != b[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}