#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
  string s;
  cin >> s;
  ll s_i = -1, s_e = -1, mx = 0;
  bool f = true;
  if (s.size() == 2)
    cout << (s[0] - '0') + (s[1] - '0') << endl;
  else
  {
    for (int i = 0; i + 1 < s.size(); i++)
    {
      ll a = s[i] - '0';
      ll b = s[i + 1] - '0';
      if ((a + b) >= 10)
      {
        s_i = i;
        s_e = i + 2;
        mx = a + b;
        f = false;
      }
    }
    if (f)
    {
      f = true;
      for (int i = 0; i + 1 < s.size(); i++)
      {
        ll a = s[i] - '0';
        ll b = s[i + 1] - '0';
        if ((a + b) > a)
        {
          s_i = i;
          s_e = i + 2;
          mx = a + b;
          f = false;
          break;
        }
      }
      if (f)
      {
        for (int i = 0; i < s.size() - 2; i++)
          cout << s[i];
        cout << (s[s.size() - 1] - '0') + (s[s.size() - 2] - '0') << endl;
      }
      else
      {
        for (int i = 0; i < s_i; i++)
          cout << s[i];
        cout << mx;
        for (int i = s_e; i < s.size(); i++)
          cout << s[i];
        cout << endl;
      }
    }
    else
    {
      for (int i = 0; i < s_i; i++)
        cout << s[i];
      cout << mx;
      for (int i = s_e; i < s.size(); i++)
        cout << s[i];
      cout << endl;
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}