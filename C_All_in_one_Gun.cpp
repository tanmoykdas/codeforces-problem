#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n, h, k;
    cin >> n >> h >> k;
    int a[n];
    for (auto &x : a)
      cin >> x;

    long long sum = 0;
    for (auto x : a)
      sum += x;

    int mx = *max_element(a, a + n);
    int mx_c = count(a, a + n, mx);

    if (sum >= h)
    {
      int x = h;
      int c = 0;
      for (int i = 0; i < n; i++)
      {
        if (a[i] == mx && mx_c > 0)
        {
          x -= mx;
          mx_c--;
          c++;
          if (x <= 0)
            break;
          continue;
        }

        if (x > mx)
        {
          x -= a[i];
          c++;
        }
        else
        {
          if (mx_c)
          {
            x -= mx;
            mx_c--;
          }
          else
            x -= a[i];
          c++;
        }
        if (x <= 0)
          break;
      }
      cout << c << endl;
    }
    else
    {
      int cycle = h / sum;
      if (h % sum == 0)
        cout << (n * cycle) + ((cycle - 1) * k) << endl;
      else
      {
        int cycle = h / sum;
        long long remain = h - (sum * cycle);

        int x = remain;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
          if (a[i] == mx && mx_c > 0)
          {
            x -= mx;
            mx_c--;
            c++;
            if (x <= 0)
              break;
            continue;
          }

          if (x > mx)
          {
            x -= a[i];
            c++;
          }
          else
          {
            if (mx_c)
            {
              x -= mx;
              mx_c--;
            }
            else
              x -= a[i];
            c++;
          }
          if (x <= 0)
            break;
        }
        cout << (n * cycle) + (cycle * k) + c << endl;
      }
    }
  }
  return 0;
}