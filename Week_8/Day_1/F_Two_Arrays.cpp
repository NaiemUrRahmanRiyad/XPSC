#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            if (b[i] != a[i] + 1)
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        sol();
        cout << '\n';
    }

    return 0;
}
