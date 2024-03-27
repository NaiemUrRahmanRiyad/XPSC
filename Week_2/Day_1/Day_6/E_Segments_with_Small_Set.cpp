#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    long long cnt = 0;
    map<int, int> s;
    while (r < n)
    {
        s[a[r]]++;
        while (s.size() > k)
        {
            s[a[l]]--;
            if (s[a[l]] == 0)
            {
                s.erase(a[l]);
            }
            l++;
        }
        cnt =(cnt)+( r - l + 1);
        r++;
    }
    cout << cnt << endl;
    return 0;
}