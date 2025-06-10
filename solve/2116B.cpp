#include <bits/stdc++.h>
using namespace std;
long long x[100003], mod = 998244353;

int main()
{
  x[0] = 1;
  for (int i = 1; i <= 100000; i++) x[i] = (x[i - 1] + x[i - 1]) % mod;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    long long mx1 = 0, mx2 = 0, index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > mx1)
      {
        mx1 = a[i];
        index1 = i;
      }
      if (b[i] > mx2)
      {
        mx2 = b[i];
        index2 = i;
      }
      if (mx1 > mx2) c[i] = (x[mx1] + x[b[i - index1]]) % mod;
      else if (mx2 > mx1) c[i] = (x[mx2] + x[a[i - index2]]) % mod;
      else {
        if (a[i - index2] > b[i - index1]) c[i] = (x[mx1] + x[a[i - index2]]) % mod;
        else c[i] = (x[mx2] + x[b[i - index1]]) % mod;
      }
    }
    for (int i = 0; i < n; i++) cout << c[i] % mod << ' ';
    cout << '\n';
  }
}