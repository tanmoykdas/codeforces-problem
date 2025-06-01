#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

#define endl '\n'

void test()
{
    LL n;
    cin >> n;
    map<LL, LL> mp;
    for(LL i=0; i<n; i++) {
        char x;
        cin >> x;
        mp[x]++;
    }
    LL count = 0;
    for (LL i= 'A'; i <= 'Z'; i++)
    {
        if (mp[i] >= i-'A'+1) count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL t;
    cin >> t;
    while(t--) test();

    // Code ends here
    return 0;
}
