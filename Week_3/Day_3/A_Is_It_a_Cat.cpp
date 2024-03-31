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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = tolower(s[i]);
    }
    s.erase(unique(s.begin(), s.end()),s.end());
    if (s == "meow")
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
