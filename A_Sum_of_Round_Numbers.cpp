#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans;
        int x = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                ans.push_back((n % 10) * x);
            }
            n /= 10;
            x *= 10;
        }
        cout << ans.size() << endl;
        for (auto number : ans)
            cout << number << " ";
        cout << endl;
    }
}