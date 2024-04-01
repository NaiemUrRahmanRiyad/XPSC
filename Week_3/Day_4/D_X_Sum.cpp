#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int A[N][M];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> A[i][j];
        int ans = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                int curr = -A[i][j];
                for (int k = 0; k < N; k++)
                {
                    int d = abs(i - k);
                    if (j >= d)
                        curr += A[k][j - d];
                    if (j + d < M)
                        curr += A[k][j + d];
                }
                ans = max(ans, curr);
            }
        cout << ans << endl;
    }
}