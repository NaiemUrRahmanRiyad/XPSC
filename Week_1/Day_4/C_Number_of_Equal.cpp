#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int totalPairs = 0;

    for (int i = 0; i < n; i++)
    {
        int index = 0;

        while (index < m && b[index] < a[i])
        {
            index++;
        }

        while (index < m && b[index] == a[i])
        {
            totalPairs++;
            index++;
        }
    }

    cout << totalPairs << endl;

    return 0;
}
