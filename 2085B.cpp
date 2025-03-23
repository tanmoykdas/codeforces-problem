#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    int sum = 0;
    int i = n - 1, c = 0;
    if (st.size() == n)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        while (a.size() > 2)
        {
            if (i == a.size() - 1)
                sum += (a[i] + a[i - 1]);
            else
                sum += a[i];
            cout << "sum: " << sum << endl;
            if (st.find(sum) != st.end())
            {
                --i;
                cout << i << endl;
                a.erase(a.begin() + i, a.end());
                a.push_back(sum);
                i = a.size() - 1;
                c++;
                sum = 0;
                cout << "a: ";
                for (auto x : a)
                {
                    cout << x << " ";
                }
                cout << "size: " << a.size() << endl;
                cout << "i: " << i << endl;
            }
            else
                i--;
            if (i == 1){
                cout << "bk" << endl;
                break;
            }
            cout << endl;
        }
        cout << c << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}