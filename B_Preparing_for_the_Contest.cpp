#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int i = 1;
        for (; i <= n; i++)
        {
            if (i <= k)
                cout << i << " ";
            else
                break;
        }

        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

}
