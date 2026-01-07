#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  int c = a;
  vector<int> fi;
  for (int i = 0; i < n; i++) {
    if (i == n - 1 && c > 0) {
        fi.push_back(c);
        continue;
    }
    if (c > 0) {
        fi.push_back(1);
        c--;
    } else fi.push_back(0);
  }
//   for (auto x : fi) cout << x << " ";
  // cout << endl;
  vector<int> sc;
  c = b;
  for (int i = 0; i < n; i++) {
    if (i == n - 1 && c > 0) {
        sc.push_back(c);
        continue;
    }

    if (fi[i] >= 1) {
        sc.push_back(0);
    } else {
        if (c > 0) {
            sc.push_back(1);
            c--;
        } else sc.push_back(0);
    }
  }
  
//   for (auto x : sc) cout << x << " ";
  if (fi[n - 1] >= 1 && fi[n - 1] == sc[n - 1]) {
    fi[n - 1] -= 1;
    fi[0] += 1;
  }
  c = 0;

  for (int i = 0; i < n; i++) {
    if (fi[i] == sc[i]) c++;
  }

  cout << c << endl;
  for (int i = 0; i < n; i++) {
    cout << fi[i] << ":" << sc[i] << endl;
  }

  return 0;
}