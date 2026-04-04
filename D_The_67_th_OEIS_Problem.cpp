#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e7 + 1;
vector<ll> prime(N, 1), hp(N, 0), lp(N, 0);
vector <ll> p;
void seive() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i < N; i++) {
        if (prime[i] == 1) {
            lp[i] = hp[i] = i;
            for (int j = i * 2; j < N; j += i) {
                prime[j] = 0;
                hp[j] = i;
                if (lp[j] == 0) lp[j] = i;
            }
        }
    }
    for (int i = 0; i < N; i++) {
    if (prime[i] != 0) p.push_back(i);
    }
}


void solve() {
  ll n; cin >> n;
  for (int i = 0; i + 1 < n + 1; i++) cout << p[i] * p[i + 1] << " "; 
  cout << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  seive();

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}