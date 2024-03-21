#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum1 = sum1 + a[i];
    }
    int c = sum - sum1;
    cout << c << endl;
    return 0;
}