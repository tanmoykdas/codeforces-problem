#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  int fi, sec;
  if (k % 2 == 0) {
    fi = k / 2;
    sec = k / 2;
    for (int i = 0 + fi; i < n - sec; i++) {
      cout << a[i] << " ";
    }
  } else {
    fi = k / 2;
    fi += 1;
    sec = k / 2;
    for (int i = n - sec - 1; i >= fi + 0; i--) {
      cout << a[i] << " ";
    }
  }
  return 0;
}