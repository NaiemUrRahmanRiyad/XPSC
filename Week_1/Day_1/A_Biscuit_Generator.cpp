#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int F_time = (t + 0.5) / a;
    int total = F_time * b;
    cout << total;

    return 0;
}