#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int int_s = stoi(s);
  if (int_s >= 77774444) cout << "4444477777";
  else {
    string ns;
    while (true) {
      ns += "47";
      sort(ns.begin(), ns.end());
      do {
        int int_ns = stoi(ns);
        if (int_ns >= int_s) {
          cout << int_ns;
          return 0;
        }
      } while (next_permutation(ns.begin(), ns.end()));
    }
  }
  return 0;
}