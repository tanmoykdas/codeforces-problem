#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll mex(vector<ll>& arr) {
    unordered_set<ll> s(arr.begin(), arr.end());
    ll mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}

void solve() {
  ll n; cin >> n;
  n *= 2;
  vector<ll> a(n), b, c; for (auto& x : a) cin >> x;

  c = a;
  reverse(c.begin(), c.end());

  if (a == c) {
    cout << (n / 2) << endl;
    return;
  }

  ll f = -1, s = -1;
  for (int i = 0; i < n; i++) {
    if (f == -1 && s == -1 && a[i] == 0) f = i; 
    if (f != -1 && a[i] == 0) s = i; 
  }
//   cout << s << " " << f << endl;

  ll mex1 = 1, mex2 = 1, mex3 = 1, mex4 = 1;

  if (f != 0) {
    ll i = f - 1, j = f + 1;
    b.push_back(0);
    
    while (i >= 0 && j <= n - 1) {
        if (a[i] == a[j]) {
            b.push_back(a[i]);
            i--; j++;
        } else break;
    }
    //for (auto x : b) cout << x << " ";
    mex1 = mex(b);
  }

    b.clear();

  if (s != n - 1) {
    ll i = s - 1, j = s + 1;
    b.push_back(0);
    while (i >= 0 && j <= n - 1) {
        if (a[i] == a[j]) {
            b.push_back(a[i]);
            i--; j++;
        } else break;
    }
    // for (auto x : b) cout << x << " ";
    mex2 = mex(b);
  }

  b.clear();

//   ll k = 0;
  bool con = true;
  b.push_back(0);
  for (int i = f; i < ((s - f) / 2) + 1; i++) { //restraint change korsi
    //cout << a[i] << " " << a[s - k++] << endl;
    if (a[i] != a[f + s - i]) {
        con = false;
        break;
    } else {
        b.push_back(a[i]);
    }
    // k++;
  }
  if(con) mex3 = mex(b); //palindrome na hoileo mex nito
  //cout << mex1 << " " << mex2 << " " << mex3 << endl;
  //for (auto x : b) cout << x << " ";


  if (con) {
    ll i = f - 1, j = s + 1;
    while (i >= 0 && j <= n - 1) {
        if (a[i] == a[j]) {
            b.push_back(a[i]);
            i--; j++;
        } else break;
    }
    // for (auto x : b) cout << x << " ";
    mex4 = mex(b);

    // for (auto x : b) cout << x << " ";
    // cout << endl;
    
    // cout << mex4 << endl;
  }
  
  cout << max(mex4, max(mex1, max(mex2, mex3))) << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}
