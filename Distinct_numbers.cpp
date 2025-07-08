#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        x = a[i];
        st.insert(x);
    }
    cout << st.size();
    return 0;
}