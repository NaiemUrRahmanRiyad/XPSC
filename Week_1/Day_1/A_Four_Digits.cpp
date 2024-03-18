#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans = to_string(n);
    while (ans.length() < 4)
    {
        ans = "0" + ans;
    }
    cout << ans;
    return 0;
}