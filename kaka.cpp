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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1 && a[0] == 0)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 1 && a[0] == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            sort(a, a + n);
            int c = 0;
            for (int i = 0; i < n - 2; i++)
            {
                if ((a[i] + a[i + 1]) == a[i + 2] || a[i] == a[i + 1])
                    c++;
            }
            cout << c << endl;
        }
    }
    return 0;
}