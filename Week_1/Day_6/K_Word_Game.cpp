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
        map<string, int> frq;
        vector<string> mat[3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                mat[i].push_back(x);
                frq[x]++;
            }
        }
        vector<int> score(3);
        for (int i = 0; i < 3; i++)
        {
            for (string word : mat[i])
            {
                if (frq[word] == 1)
                {
                    score[i] += 3;
                }
                else if (frq[word] == 2)
                {
                    score[i] += 1;
                }
            }
        }
        for (int i = 0; i < 3; i++)
            cout << score[i] << " ";
        cout << "\n";
    }
    return 0;

}
