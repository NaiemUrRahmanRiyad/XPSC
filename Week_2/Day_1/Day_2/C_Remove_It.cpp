#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y;
    cin >> n >> y;
    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (x[i] != y)
        {
            result.push_back(x[i]);
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}