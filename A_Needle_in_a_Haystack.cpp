#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s, tt;
    cin >> s >> tt;
    map<char, int> ms, tts;
    for (auto x : s) ms[x]++;
    for (auto x : tt) tts[x]++;

    bool possible = true;
    for (int i = 0; i < s.size(); i++) {
        if (ms[s[i]] > tts[s[i]]) possible = false; 
    }
    
    int j = 0;
    for (int i = 0; i < tt.size(); i++) {
        
    }
  }
  return 0;
}