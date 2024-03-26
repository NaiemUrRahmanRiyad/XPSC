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
        set<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.insert(x);
        }
        if ((n - arr.size()) % 2 == 0)
        {
            cout << arr.size() << endl;
        }
        else
            cout << arr.size() - 1 << endl;
    }

    return 0;
}